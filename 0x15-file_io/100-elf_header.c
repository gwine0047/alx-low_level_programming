
#include <elf.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<fcntl.h>
#include <sys/types.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * find_elf - deetects if a file is an ELF file.
 * @e_ident: A pointer to an array containing ELF magic numbers.
 *
 * Return: nothing.
 */

void find_elf(unsigned char *e_ident)
{
	int i = 0;

	while (i < 4)
	{
		if (e_ident[i] != 'E' && e_ident[i] != 'L'
				&&	e_ident[i] != 'F' && e_ident[i] != 127)
		{
			dprintf(STDERR_FILENO, "Error: ELF file not found");
			exit(98);
		}
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: pointer to an array of ELF classes.
 */

void print_class(unsigned char *e_ident)
{
	printf("	Class:");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");

	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");

	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");

	else
		printf("unknown: %x\n", e_ident[EI_CLASS]);
}

/**
 * print_version - Prints the ELF Header's version.
 * @e_ident: is a pointer to an array of ELF versions
 */
void print_version(unsigned char *e_ident)
{
	printf("Version %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_magic - Prints the ELF magic numbers.
 * @i_ident: points to an array of ELF magic numbers.
 */
void print_magic(unsigned char *e_ident)
{
	int no = 0;

	printf("	Magic:	");

	for (; no < EI_NIDENT; no++)
	{
		printf("%02x", e_ident[no]);

		if (no == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * Print_data - Prints ELF header's data.
 * @e_ident: a pointer to ELF data array.
 */

void print_data(unsigned char *e_ident)
{
	printf("	Data:					");

	if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (ELFDATANONE == e_ident[EI_DATA])
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_osabi - prints an ELF's OS/ABI
 * @e_ident: pointer to an array of ELF'S versions.
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");

	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * print_abi - prints the ABI version of an ELF header.
 * @e_ident: points to an array of ELF ABI versions.
 */
void print_abi(unsigned char *e_ident)
{
	printf("	ABI Version:				%d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints an ELF header type.
 * @type: an ELF type.
 * @e_ident: points to a array of ELF classes.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type								");

	if (e_type == ET_NONE)
		printf("NONE (None)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", e_type);
}

/**
 * print_entry - prints an ELF header's entry point.
 * @e_entry: the entry point's address.
 * @e_ident: points to an ELF class array.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("	Entry point address:								");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#1lx\n", e_entry);
}

/**
 * close_elf - closes an ELF file.
 * @elf: file descriptor.
 * Return: exit 98 if file cannot be closed.
 */

void close_elf(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error can't close fd %d\n", file);
		exit(98);
	}
}


/**
 * main - Shows the details contained in an ELF header.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 1 on success
 */

int main(int __attribute__((__unused__))argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error Cannot read file %s\n", argv[1]);
		exit(98);
	}

	find_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(op);
	return (0);
}

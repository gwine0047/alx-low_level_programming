#include "main.h"
/**
 * open_read - opens a file for reading.
 * @filename: is the name of file.
 *
 * Return: file descriptor.
 */

int open_read(char *filename)
{
	int rd_fd;

	if (!filename)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", filename);
	}
	rd_fd = open(filename, O_RDONLY);
	if (rd_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", filename);
		exit(98);
	}
	return (rd_fd);
}
/**
 * open_write - opens a file for writing.
 * @filename: is the name of file.
 *
 * Return: file descriptor.
 */


int open_write(char *filename)
{
	int wr_fd;

	wr_fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (wr_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
	return (wr_fd);
}
/**
 * main - checks the code.
 * @argc: commandline argument count.
 * @argv: commandline arguments.
 *
 * Return: 0 when successful.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t r_bytes, w_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open_read(argv[1]);
	file_to = open_write(argv[2]);
	r_bytes = 1024;
	while (r_bytes == 1024)
	{
		r_bytes = read(file_from, buffer, 1024);
		if (r_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
			exit(98);
		}
		w_bytes = write(file_to, buffer, r_bytes);
		if (w_bytes || w_bytes != r_bytes)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

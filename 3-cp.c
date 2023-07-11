#include "main.h"
/**
 * main - copies the content of one file to another.
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	int read_bytes, write_bytes, write_fd, read_fd, close_read, close_write;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	read_fd = open(argv[1], O_RDONLY);
	if (read_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	write_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	read_bytes = read(read_fd, buffer, 1024);
	write_bytes = write(write_fd, buffer, read_bytes);
	while (read_bytes > 0)
	{
		if (write_fd < 0 || write_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(read_fd);
			exit(99);
		}
	}
	if (read_bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_read = close(read_fd);
	if (close_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", read_fd);
		exit(100);
	}
	close_write = close(write_fd);
	if (close_write < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", write_fd);
		exit(100);
	}
	return (0);
}

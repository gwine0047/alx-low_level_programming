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
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	}
	rd_fd = open(filename, O_RDONLY);
	if (rd_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
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

	wr_fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (wr_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
	return (wr_fd);
}
/**
 * close_err - handles the error from closing a file.
 * @file_descriptor: points to the file.
 */

void close_err(int file_descriptor)
{
	int err;

	err = close(file_descriptor);
	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_descriptor);
		exit(100);
	}
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
	int file_from, file_to;
	ssize_t r_bytes, w_bytes;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open_read(argv[1]);
	file_to = open_write(argv[2]);
	do {
		r_bytes = read(file_from, buffer, 1024);
		if (r_bytes < 0)
		{
			dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
			exit(98);
		}
		w_bytes = write(file_to, buffer, r_bytes);
		if (w_bytes < 0 || w_bytes != r_bytes)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (r_bytes > 0);
	close_err(file_from);
	close_err(file_to);

	return (0);
}

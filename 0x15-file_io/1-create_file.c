#include "main.h"
/**
 * read_textfile - reads a text file and prints it.
 * @filename: is the name of the file to be read.
 * @letters: is the number of letters.
 *
 * Return: the number of characters written.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int rd_count, wr_count;
	int f_ptr;
	char *buff;

	if (filename == NULL)
		return (0);

	f_ptr = open(filename, O_RDONLY);
	if (f_ptr == 0)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	rd_count = read(f_ptr, buff, letters);
	wr_count = write(STDOUT_FILENO, buff, rd_count);

	close(f_ptr);

	free(buff);

	return (wr_count);


}

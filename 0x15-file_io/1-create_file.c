#include "main.h"
/**
 * create_file - reads a text file and prints it.
 * @filename: is the name of the file to be read.
 * @text_content: is the string to be input.
 *
 * Return: 1 on success and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int f_ptr, wr_count, let_count = 0;

	if (!filename)
		return (-1);

	f_ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, "wr-------");
	if (f_ptr == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[let_count] != '\0')
	{
		wr_count = write(f_ptr, text_content, let_count);
		let_count++;
	}

	if (wr_count == -1)
		return (-1);
	}
	close(f_ptr);

	return (1);


}

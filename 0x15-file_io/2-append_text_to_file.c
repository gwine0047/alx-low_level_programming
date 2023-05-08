#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file..
 * @filename: is the name of the file to be read.
 * @text_content: is the string to be appended
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_ptr, wr_count, let_count = 0;

	if (filename == NULL)
		return (-1);

	f_ptr = open(filename, O_WRONLY | O_APPEND);
	if (f_ptr == -1)
		return (-1);

	if (text_content)
	{

		for (;text_content[let_count]; let_count++);

		wr_count = write(f_ptr, text_content, let_count);

		if (wr_count == -1)
			return (-1);

	}
	close(f_ptr);

	return (1);


}

#include "main.h"

/**
 * _strncat - is a function that concatenates two strings.
 * @src: is the source string.
 * @dest: is the destination string.
 * @n: is the number of characters to be concatenated.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/*dest[dest_len + i] = '\0';*/
	return (dest);
}

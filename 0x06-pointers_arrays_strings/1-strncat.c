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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (0);
}

#include "main.h"

/*
 * _memcpy - copies memory data
 * @dest: destination to be copied to
 * @src: memory source to copy from
 * @n: is the size of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (j = 0; j < k; j++)
	{
	dest[j] = src[j];

	}

	return (dest);
}

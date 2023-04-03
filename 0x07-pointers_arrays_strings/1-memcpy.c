#include "main.h"

/**
 *_memcpy - This functions copies the bytes
 *
 *@dest: destination to be copied to
 * @src: memory source to copy from
 *@n: is the size of bytes to be copied
 *
 *Return: returns a pointer to dest.
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

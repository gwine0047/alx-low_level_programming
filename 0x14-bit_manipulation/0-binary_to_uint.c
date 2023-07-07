#include "main.h"
/**
 * binary_to_uint - converts a binary to an integer.
 * @b: is a pointer to characters.
 *
 * Return: the converted number
 * or 0 if NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	size_t a;
	size_t result = 0;

	if (b == NULL)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] == '0')
			result <<= 1;

		else if (b[a] == '1')
			result = (result << 1) | 1;

		else
			return (0);
	}
	return (result);
	printf("\n");
}

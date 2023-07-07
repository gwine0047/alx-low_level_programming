#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian
 * 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int amount;
	char *ptr;

	amount = 1;
	ptr = (char *)&amount;

	if (*ptr == 1)
		return (1);

	else
		return (0);
}

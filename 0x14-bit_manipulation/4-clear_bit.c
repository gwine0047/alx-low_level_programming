#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0.
 * @n: is the number to be converted.
 * @index: is the position of value to be converted.
 *
 * Return: 1 if successful.
 * and -1 if an error occur.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ref;

	if (n == NULL)
		return (-1);

	if (!(index < 64))
		return (-1);

	ref = 1 << index;
	if (*n & ref)
		*n ^= ref;

	return (1);

}

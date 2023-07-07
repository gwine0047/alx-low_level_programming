#include "main.h"
/**
 *set_bit - sets the value of a bit to 1.
 * @n: is the number to be converted.
 * @index: is the position of value to be converted.
 *
 * Return: 1 if successful.
 * and -1 if an error occur.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref;

	if (n == NULL)
		return (-1);

	if (!(index < 64))
		return (-1);
	ref = 1 << index;
	*n |= ref;

	return (1);

}

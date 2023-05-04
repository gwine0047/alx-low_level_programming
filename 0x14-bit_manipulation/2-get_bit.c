#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index.
 * @n: is the number to be converted.
 * @index: is the bit to be returned.
 *
 * Return: the value of the bit at the given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int result;

	if (index >= sizeof(unsigned long int) * 8)
			return -1;

	mask = 1UL << index;
	result = n & mask;

	return (result != 0) ? 1 :0;	
}

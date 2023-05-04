#include "main.h"
/**
 * flip_bits - flip bits.
 * @n: first number.
 * @m: second number.
 *
 * Return: the number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	
	while (n || m)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}

		n >>= 1;
		m >>= 1;
	}
	return (count);
}

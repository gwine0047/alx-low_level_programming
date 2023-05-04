#include "main.h"
/**
 * _exponent - calculates the value of a number to 
 * the power of n.
 * @base: base number.
 * @n: exponential value.
 * 
 * Return: the the number multiplied by itself n times.
 */

unsigned long int _exponent(unsigned int base, unsigned n)
{
	unsigned long int total;
	size_t i = 0;

	while (i < n)
	{
		total = total * base;
		i++
	}
	return (total);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: is the number to be converted.
 *
 * Return: the converted number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int a, result;

	a = _exponent(2, 63);

	while (a != 0)
	{
		result = n & a;

		if (result == a)
		{
			_putchar('1');
		}

		else
		{
			_putchar('0');
		}
		a >>= 1
	}
}

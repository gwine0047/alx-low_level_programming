#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: is the number to be converted.
 *
 * Return: the converted number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int ref;
	int result;

	ref = (n >> 0);

	if (ref)
	{
		if (n >> 1)
			print_binary(n >> 1);

		result = (n & 1);
		_putchar(result + '0');
	}

	else
	{
		_putchar('0');
	}

}



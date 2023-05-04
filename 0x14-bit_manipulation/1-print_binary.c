#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: is the number to be converted.
 *
 * Return: the converted number.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	else
	{
		_putchar('0');
		return;
	}
	_putchar((n & 1) ? '1' : '0');
	_putchar('\0');
}

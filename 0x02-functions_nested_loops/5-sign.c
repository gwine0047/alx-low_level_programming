#include "main.h"
/**
 * print_sign - prints symbols
 * @n: returns symbols
 * Return: 1 for positive, 0 for zero and -1 for negative values
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

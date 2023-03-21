#include "main.h"
/**
 * print_last_digit - returns last value
 * @l: parameter
 * Return: last value of l
 */
int print_last_digit(int l)
{
	int last;

	last = l % 10;
	if (l < 0)
		last = -(last);
	_putchar(last + '0');
	return (last);
}

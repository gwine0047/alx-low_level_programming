#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line on the terminal
 * @n: The number of '_' character
 * Return: Void.
 */
void print_line(int c)
{
	int i;

	for (i = 0; i < c; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

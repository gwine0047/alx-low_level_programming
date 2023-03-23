#include "main.h"
#include <stdio.h>
/**
 * print_diagonal -draws a diagonal line on the terminal
 *@n: is the number of times the character '\' is used.
 *Return: void.
 */
void print_diagonal(int n)
{
	int g;
	int gaps;

	for (g = 0; g < n; g++)
	{
		for (gaps = 0; gaps < g; gaps++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}

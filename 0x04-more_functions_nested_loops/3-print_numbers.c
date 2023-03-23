#include "main.h"
#include <stdio.h>
/**
 * print_numbers- print 0 - 9
 * Return: 0 Always
 */
void print_numbers(void)
{
	int w;
	
	for (w = 0; w < 10; w++)
	{
		_putchar(w + '0');
		
	}
	_putchar('\n');
}

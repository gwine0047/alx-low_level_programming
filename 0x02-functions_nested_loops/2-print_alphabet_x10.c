#include "main.h"
/**
 * print_alphabet_x10 - this function prints the alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int z;
	char y;

	for (z = 1; z <= 10; z++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}

		_putchar('\n');
	}
}

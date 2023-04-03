#include "main.h"

/**
 * print_chessboard -This function prints a chessboard when called.
 * @a: is a pointer to a char
*Return: void
*/

void print_chessboard(char (*a)[8])
{
	int k, l;

	for (k = 0; k < 8; k++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(*(*(k + a) + l));
		}
	_putchar('\n');
	}
}

#include "main.h"

/**
 * _puts_recursion - This is similar to a print function.
 * @s: pointer to chracters to be input.
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

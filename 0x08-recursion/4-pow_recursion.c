#include "main.h"

/**
 * _pow_recursion - This returns the value of x to the power y.
 * @x: base number.
 * @y: index.
 * Return: the value of x to the power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}

#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 *_sqrt_recursion - This function returns the square root
 *of a number.
 *@n:number whose square root we want.
 *Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else
		return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - This is recalled to find
 * the actual sqaure root.
 * @n:number whose square root we require.
 * @i: is an iterator.
 * Return: the resulting square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	else if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}


#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds
 * @a:first num
 * @b:second num
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a:first integer
 * @b:second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @m:first integer
 * @n:second integer
 *  Return: multiple
 */
int op_mul(int m, int n)
{
	return (m * n);
}

/**
 * op_div - divides
 * @c:first integer
 * @d:second integer
 *  Return: division
 */
int op_div(int c, int d)
{
	if (d == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (c / d);
}

/**
 * op_mod - gets remainder
 * @x: first integer
 * @y: second integer
 * Return: remainder
 */
int op_mod(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (x % y);
}

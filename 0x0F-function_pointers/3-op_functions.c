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
 * @a:first integer
 * @b:second integer
 *  Return: multiple
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a:first integer
 * @b:second integer
 *  Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - gets remainder
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

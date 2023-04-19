#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_sub - subtraction
 * @a:1st num
 * @b:2nd num
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_add - addition
 * @a:1st num
 * @b:2nd num
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - multiplication
 * @a:2nd num
 * @b:1st num
 *
 *  Return:multiple
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - division
 * @a: 2nd num
 * @b: 1st num
 *
 *  Return: remainder
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

/**
 * op_div - division
 * @a: second number
 * @b: first number
 *
 * Return: whole number
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

#include <stdio.h>
/**
*add - operates on numbers
* @a: first number
* @b: second number
* Return: an integer
*/
int add(int a, int b)
{
	return (a + b);
}

/**
*sub - operates on numbers
* @a: first number
* @b: second number
* Return: an integer
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
*div - operates on numbers
* @a: first number
* @b: second number
* Return: an integer
*/
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}

/**
*mul - operates on numbers
* @a: first number
* @b: second number
* Return: an integer
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
*mod - operates on numbers
* @a: first number
* @b: second number
* Return: an integer
*/
int mod(int a, int b)
{
	return (a % b);
}

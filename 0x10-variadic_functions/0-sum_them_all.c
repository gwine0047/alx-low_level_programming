#include "variadic_functions.h"
/**
 * sum_them_all - adds all its parameters.
 * @n: number of arguements.
 * Return: 0 when successful
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a = 0;
	int sum = 0;

	va_list sums;

	va_start(sums, n);

	for (; a < n; a++)
	{
		sum += va_arg(sums, int);
	}
	va_end(sums);
	return (sum);
}

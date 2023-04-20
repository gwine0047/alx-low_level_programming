#include "variadic_functions.h"
/**
 * print_numbers - prints a number followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed.
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list nums;

	va_start(nums, n);

	for (a = 0; a < n; a++)
	{
		if (separator == NULL)
			printf("%d", va_arg(nums, int));

		else if (a == (n - 1))
			printf("%d", va_arg(nums, int));

		else
			printf("%d%s", va_arg(nums, int), separator);
	}
	va_end(nums);
	printf("\n");
}

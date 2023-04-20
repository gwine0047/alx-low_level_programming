#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator:to be printed between strings.
 * @n: number of stirngs to be printed.
 * Return: null.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 0;
	char *type;
	va_list string;

	va_start(string, n);

	for (; a < n; a++)
	{
		type = va_arg(string, char*);
		if (!separator)
			printf("%s", type);

		else if (a == (n - 1))
			printf("%s", type);

		else if (type == NULL)
			type = "(nil)";

		else
			printf("%s%s", type, separator);
	}
	va_end(string);
	printf("\n");
}

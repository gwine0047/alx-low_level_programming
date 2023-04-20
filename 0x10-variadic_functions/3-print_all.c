#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format - is the types of arguements
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *cpy, *com = "";
	va_list type;

	va_start(type, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", com, va_arg(type, int));
					break;

				case 'c':
					printf("%s%c", com, va_arg(type, int));
					break;

				case 'f':
					printf("%s%f", com, va_arg(type, double));
					break;

				case 's':
					cpy = va_arg(type, char *);
					if (!cpy)
						cpy = "(nil)";
					printf("%s%s", com, cpy);
					break;

				default:
					i++;
					continue;
			}
			com = ", ";
			i++;
		}
	}
	printf("\n");

}

#include "function_pointers.h"
/**
 *print_name - prints the name as is
 *@name: name to be printed.
 *@f: function pointer
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(f == NULL))
		f(name);
}

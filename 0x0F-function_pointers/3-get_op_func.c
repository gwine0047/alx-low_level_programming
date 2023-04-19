#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func -gets the operator
 * @s: character representing the operator.
 *
 * Return: operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{ NULL, NULL }
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (0);
}

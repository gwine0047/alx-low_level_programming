#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int s1, s2, result;
	char a;
	int (*f)(int, int);

	if (!(argc == 4))
	{
		printf("Error\n");
		exit(98);
	}

	s1 = atoi(argv[1]);
	s2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	a = *argv[2];

	if ((a == '/' || a == '%') && s2 == 0)
	{
		printf("Error");
		exit(100);
	}
	result = f(s1, s2);

	printf("%d\n", result);
	return (0);
}

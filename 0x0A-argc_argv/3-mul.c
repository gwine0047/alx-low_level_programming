#include "main.h"

/**
 * main - main block
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Return: 0 when successful and 1 if otherwise.
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);

	return (0);
}

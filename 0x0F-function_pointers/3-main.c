#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - main block
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (!(argc == 4))
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

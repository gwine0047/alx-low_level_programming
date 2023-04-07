#include "main.h"

/**
 * main - main block
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Return: 0 when successful and 1 when not.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int array;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (array = 1; array < argc; array++)
	{
		for (i = 0; argv[array][i]; i++)
		{
			if (!(isdigit(argv[array][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

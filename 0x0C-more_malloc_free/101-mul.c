#include "main.h"

/**
 * main - multiplies two positive integers.
 * @argv: arguement elements.
 * @argc: no of arguement.
 * Return: num1 * num2.
 */
int main(int argc, char *argv[])
{
	int a, b;
	unsigned long   mul = 0;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > 57 || argv[a][b] < 47)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
				printf("%lu\n", mul);
	return (0);


}

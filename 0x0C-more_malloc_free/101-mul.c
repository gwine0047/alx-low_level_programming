#include "main.h"

/**
 * main - multiplies two positive integers.
 * @argv: argument elements.
 * @argc: no of argument.
 * Return: num1 * num2.
 */
int main(int argc, char *argv[])
{
	int a, b, num1, num2;
	unsigned long int mul = 0;

	if (argc != 3)
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
	num1 = atol(argv[1]);
	if (num1 < 0)
		num1 = -num1;

	num2 = atol(argv[2]);
	if (num2 < 0)
		num2 = -num2;

	mul = num1 * num2;
	printf("%lu\n", mul);

	return (0);


}

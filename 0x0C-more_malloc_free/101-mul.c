#include "main.h"

/**
 * main - multiplies two positive integers.
 * @argv: arguement elements.
 * @argc: no of arguement.
 * Return: num1 * num2.
 */
int main(int argc, char *argv[])
{
	int a, b, c, d;
	unsigned long mul = 0;

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
	c = atol(argv[1]);
	if (c < 0)
		c = -c;
	d = atol(argv[2]);
	if (d < 0)
		d = -d;

	mul = c * d;
	printf("%lu\n", mul);

	return (0);


}

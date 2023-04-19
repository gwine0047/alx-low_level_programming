#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * @argc: arguement count
 * @argv: arguement elements
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int b, mem = 0;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	mem = atoi(argv[1]);

	if (!(mem > 0))
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	while (b < mem)
	{
		printf("%02hhx\n", array[b]);
		break;
		b++;
	}
	printf("%02hhx", array[b]);
	return (0);
}

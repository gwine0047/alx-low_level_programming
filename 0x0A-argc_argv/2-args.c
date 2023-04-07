#include "main.h"

/**
 * main - main block
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Return: 0 when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("\n");
	return (0);
}

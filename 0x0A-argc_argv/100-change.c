#include "main.h"

/**
 * main - main block
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

		while (cents > 0)
		{
			if (cents % 25 < cents)
			{
				cents -= 25;
				coins++;
			}
			else if (cents % 10 < cents)
			{
				cents = cents - 10;
				coins++;
			}
			else if (cents % 5 < cents)
			{
				cents = cents - 5;
				coins++;
			}
			else if (cents % 2 < cents)
			{
				cents = cents - 2;
				coins++;
			}
			else if (cents % 1 < cents)
			{
				cents = cents - 1;
				coins++;
			}
		}
		printf("%d\n", coins);

		return (0);
}

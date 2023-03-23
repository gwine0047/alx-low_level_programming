#include <stdio.h>
/**
 * main - prints 1 - 100 while omitting every multiples of 3 and 5
 * Return: 0 Always
 */
int main(void)
{
	int i;
	char j [] = "Fizz";
	char k [] = "Buzz";
	char l [] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0)
		{
			printf("%s", j);
		}
		else if (i % 5 == 0)
		{
			printf("%s", k);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", l);
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

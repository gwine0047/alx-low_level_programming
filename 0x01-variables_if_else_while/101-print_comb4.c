#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c = 0;

	while (c < 10)
	{
		b = 0;
		while (b < 10)
		{
			a = 0;
			while (a < 0)
			{
				if (a != b && b != c && c < b && b < a)
				{
					putchar('0' + c);
					putchar('0' + b);
					putchar('0' + a);

					if (a + b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			a++;
			}
		b++;
		}
	c++;
	}
	putchar('\n');
	return (0);
}

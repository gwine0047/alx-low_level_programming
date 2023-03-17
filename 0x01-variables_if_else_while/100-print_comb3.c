#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: A program that prints all different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		a = 0;
		while (a < 10)
		{
			if (b != a && b < a)
			{
				putchar('0' + b);
				putchar('0' + a);
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}

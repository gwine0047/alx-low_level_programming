#include <stdio.h>
/**
 * main - prirnts the alphabet in lower case.
 * Return: always 0 (Success)
 */
int main(void)
{
	char low_case = 'a';

	while (low_case <= 'z')
	{
		putchar(low_case);
		low_case++;
	}
	putchar('\n');
	return (0);
}

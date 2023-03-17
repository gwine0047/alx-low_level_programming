#include <stdio.h>
/**
 * main - prints the alphabet in both lower and upper cases.
 * Return: always 0 (Success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar (alph);
		alph++;
	}

	alph = 'A';

	while (alph <= 'Z')
	{
		putchar (alph);
		alph++;
	}
	putchar('\n');
	return (0);
}

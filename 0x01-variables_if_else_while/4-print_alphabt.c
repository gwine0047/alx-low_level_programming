#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except 'e' and 'q'
 * Return: 0
 */
int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		if (m != 'e' && m != 'q')
		putchar(m);
		m++;
	}
		putchar('\n');
	return (0);

}

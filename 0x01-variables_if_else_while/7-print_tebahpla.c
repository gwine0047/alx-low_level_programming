#include <stdio.h>
/**
* main - prints the alphabet in reverse
* Return: 0 always (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar (letter);
	putchar ('\n');
	return (0);
}


#include <stdio.h>
/**
* main - prints all single digits using only putcha
* Return: 0 always (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	putchar (num + '0');

	putchar ('\n');
	return (0);
}

#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: is the number to be converted.
 *
 * Return: the converted number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int ref;
	int bit;
	ref = 1UL << (sizeof(int) * 8 - 1);

	while (ref > 0)
	{
		bit = (n & ref) ? 1 : 0;
		printf("%d", bit);
		ref >>= 1;
	}
	
}

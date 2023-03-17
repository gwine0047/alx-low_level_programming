#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of a random number
 * Return: 0 always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) == 0)
		printf("Last digit of %d is %d and the string is 0\n", n, n % 10);
	if ((n % 10) > 5)
		printf("Last digit of %d is %d and thestringis greater than 5\n", n, n % 10);
	else
		printf("Last digit of %d is %d and the string is less than 5\n", n, n % 10);
	return (0);
}

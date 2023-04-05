#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - This function checks if an input
 * is a prime number or not.
 * @n: number to be assessed.
 * Return: 1 if true and 0 if otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Thus function finds a prime number.
 * @n: number to be assessed.
 * @i: iterator
 *
 * Return: 1 if true and 0 if not.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);

	else if (i > 0 && n % i == 0)
		return (0);

	else
		return (actual_prime(n, i - 1));
}

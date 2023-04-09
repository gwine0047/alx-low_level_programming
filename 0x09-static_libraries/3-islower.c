#include "main.h"
/**
 *_islower - prints 1 for upper and 0 for lower case
 *
 *@c: is the parameter.
 * Return: 0 always
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 *_strlen_recursion - This function prints the length of a string.
 * @s: This is the string.
 * Return: The length of string *s.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}

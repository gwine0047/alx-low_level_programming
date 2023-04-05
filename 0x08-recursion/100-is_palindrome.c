#include "main.h"
int check_pal(char *s, int i, int len);

int _strlen_recursion(char *s);
/**
 * is_palindrome - This function checks if a string is a
 * palindrome or not.
 * @s:string to be checked.
 * Return: 1 if ture and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	else
		return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion -returns length of a string.
 * @s:string in question.
 * Return: length of string *s.
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
*check_pal - checks characters for palindrome
*@s: String to be evaluated.
*@i: is the iterator
*@len: length of string
*Return: 1 if true, and 0 if not.
*/
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

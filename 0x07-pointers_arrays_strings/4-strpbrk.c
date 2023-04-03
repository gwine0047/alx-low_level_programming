#include "main.h"

/**
 * _strpbrk - This fucntion searches a string for any of a set of bytes.
 * @s: Character to look for.
 *@accept: String to be searched.
 *
 * Return: Retturn a pointer to the bytes if matched or NULL if not.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)

			if (s[i] == accept[j])

				return (&s[i]);

	}
	return ('\0');
}

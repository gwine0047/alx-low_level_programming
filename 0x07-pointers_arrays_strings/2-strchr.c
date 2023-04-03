#include "main.h"

/**
 * _strchr - This function prints found c
 * @s: pointer to a character
 * @c: char parameter to search for
 * Return: It returns a pointer to 's'.
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}

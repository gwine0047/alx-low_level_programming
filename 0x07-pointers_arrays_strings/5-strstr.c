#include "main.h"

/**
 * _strstr - is a function that finds the occurence of a substring.
 * @haystack: is where the search takes place - main string.
 * @needle: is the substring.
 * Return: A pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_p = haystack;
	char *needle_p = needle;

	while (*haystack)
	{
		while(*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!needle)
			return (haystack_p);
	
		needle = needle_p;
		haystack_p++;
		haystack = haystack_p;
	}
	return ('\0');
}

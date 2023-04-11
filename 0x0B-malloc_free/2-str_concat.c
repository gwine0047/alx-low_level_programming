#include "main.h"
/**
 * str_concat - allocates space in memory which contains the
 * contents of s1, s2 and null terminated.
 * @s1: First string
 * @s2: second string
 * Return: a pointer to the allocated space and NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int a, b;
	int len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		len1++;

	for (b = 0; s2[b] != '\0'; b++)
		len2++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	a = b = 0;
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		str[a] = s2[b];
		a++, b++;
	}
	str[a] = '\0';
	return (str);
}

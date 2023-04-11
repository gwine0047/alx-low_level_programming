#include "main.h"
/**
 * _strdup - allocates space in memory that contains a copy of the
 * string given as a parameter.
 * @str: pointer to string.
 * Return: On success, a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	unsigned int n, m = 0;
	char *g;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
	{
		m++;
	}
		g = malloc(sizeof(char) * (m + 1));
	if (g == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		g[n] = str[n];
	return (g);

}

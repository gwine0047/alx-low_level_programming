#include "main.h"
/**
 * _strdup - allocates space in memory that contains a copy of the
 * string given as a parameter.
 * @str: pointer to.
 * Return: On success, a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int n, m;
	char *g;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)

		g = malloc(sizeof(char) * (n + 1));
	if (g == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)
		g[m] = str[m];
	return (g);

}

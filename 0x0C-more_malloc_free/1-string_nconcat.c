#include "main.h"
/**
 * len_str - gets the length of a string.
 * @str: is string.
 * Return: length of the string.
 */
int len_str(char *str)
{
	int a = 0;

	while (str[a])
		a++;

	return (a);
}

/**
 *string_nconcat - This function allocates memory to.
 * concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: length of string to be added.
 *Return: a pointer to the newly allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	int len = 0;
	char *conca;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	k = n;
	if (k < 0)
		return (NULL);

	if (k >= len_str(s2))
		k = len_str(s2);

	len = len_str(s1) + len_str(s2) + 1;

	conca = malloc(sizeof(*conca) * len);
	if (conca == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		conca[i] = s1[i];

	for (j = 0; j < k; j++)
		conca[i + j] = s2[j];

	conca[i + j] = '\0';

	return (conca);
}

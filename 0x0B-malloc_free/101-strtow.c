#include "main.h"
/**
 * word_count - This function counts the number of words
 * in a string..
 * @w: pointer to string..
 * Return: number of words
 */
int word_count(char *w)
{
	int a, b;
	int point = 0;

	b = 0;

	for (a = 0; w[a] != '\0'; a++)
	{
		if (w[a] == ' ')
			point = 0;
		else if (point == 0)
		{
			point = 1;
			b++;
		}
	}
	return (b);
}

/**
 * strtow - a function that splits words.
 * @str: is a string made of words.
 * Return: NULL if failed;
 * pointer to an array if successful.
 */
char **strtow(char *str)
{
	char **array, *temp;
	int c, words, start, end;
	int d = 0, len = 0, e = 0;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);

	for (c = 0; c <= len; c++)
	{
		if (str[c] == ' ' || str[c] == '\0')
		{
			if (e)
			{
				end = c;
				temp = (char *) malloc(sizeof(char) * (e + 1));
				if (temp == NULL)
					return (NULL);

				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				array[d] = temp - e;
				d++;
				e = 0;
			}
		}
		else if (e++ == 0)
			start = c;
	}
	array[d] = NULL;
	return (array);
}



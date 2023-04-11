#include "main.h"
/**
 * argstostr - concatenates all the arguements of your program.
 * @ac: arguemnt count
 * @av: arguement vector
 * Return: a pointer to a new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0;
	int size = 0;
	char *input;

	if (av == NULL || ac == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			size++;
		}
		size++;
	}
	input = malloc((sizeof(char) * size) + 1);
	if (input == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			input[c] = av[a][b];
			c++;
		}
		input[c] = '\n';
		c++;
	}
	input[c] = '\0';
	return (input);
}

#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes
 * it with a specific char.
 * @size: size of array
 * @c: character to be created.
 * Return: a  pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
		unsigned int a = 0;
		char *string;

		string = malloc(sizeof(char) * size);
		if (string == NULL || size == 0)
			return (NULL);

		for (a = 0; a < size; a++)
		{
			string[a] = c;
		}
		return (string);
}

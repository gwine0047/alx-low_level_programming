#include "main.h"
/**
 * _calloc - allocates memory for an array.
 * @nmemb: elements in the array.
 * @size: size of the array.
 * Return: NULL or a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < (size * nmemb); a++)

		arr[a] = 0;

	return (arr);
}

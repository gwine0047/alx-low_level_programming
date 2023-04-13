#include "main.h"

/**
 * array_range - creates an array include given.
 * minimum and maximum range.
 * @min: minimum range.
 * @max: maximum range.
 * Return: a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr, b, grid = 0;

	if (min > max)
		return (NULL);
	grid = (max + 1) - min;

	arr = malloc(sizeof(int) * grid);
	if (arr == NULL)
		return (NULL);

	for (b = 0; b < grid; b++)
		arr[b] = min + b;

	return (arr);
}

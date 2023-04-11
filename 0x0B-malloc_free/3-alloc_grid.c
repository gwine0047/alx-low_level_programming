#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers.
 * @width: is the number of columns
 * @height: is the number of rows
 * Return: a pointer to an array.
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * height);

	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(sizeof(int) * width);

		if (arr[a] == NULL)
		{
			for (; a >= 0; a--)
				free(arr[a]);

			free(arr);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			arr[a][b] = 0;
	}
	return (arr);
}

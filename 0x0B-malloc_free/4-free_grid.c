#include "main.h"
/**
 * free_grid - frees up memory allocated
 * @grid: is the number of columns
 * @height: is the number of rows
 * Returns: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

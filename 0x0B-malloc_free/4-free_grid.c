#include <stdlib.h>
#include "main.h"

/**
 * free_grid - This function frees the previously allocated
 * memory location
 * @grid: The grid to be freed
 * @height: The height to be freed
 *
 * Return: Return the freed memory location
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}


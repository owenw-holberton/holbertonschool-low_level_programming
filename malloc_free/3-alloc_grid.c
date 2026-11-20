#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers initialized to 0
 * @width: Number of columns in the grid
 * @height: Number of rows in the grid
 *
 * Return: Pointer to the allocated 2D grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (k = 0; k < h; k++)
				free(grid[k]);
			free(grid);
			return (NULL);
		}

		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2d array of integers.
 * Each element of the grid is initialized to 0.
 * @width: width of the 2d array.
 * @height: height of the 2d array.
 * Return: pointer to 2d array (Success), otherwise NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (height < 1 || width < 1)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Main Enry
 * @width: input
 * @height: input
 * Return: 0
 */


int **alloc_grid(int width, int height)
{
	int **ptr_grid;
	int i, j;

	if (height <= 0 ||  width <= 0)
		return (NULL);

	ptr_grid = malloc(height * sizeof(int *));

	if (ptr_grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr_grid[i] = malloc(width * sizeof(int));
		if (ptr_grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr_grid[i]);
			free(ptr_grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr_grid[i][j] = 0;

	return (ptr_grid);


}

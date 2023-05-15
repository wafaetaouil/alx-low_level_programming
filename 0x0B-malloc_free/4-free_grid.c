#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - freed 2 dimension
 * @grid: first dimension
 * @height: seconf dimension
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

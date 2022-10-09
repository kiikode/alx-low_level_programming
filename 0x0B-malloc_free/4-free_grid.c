#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free a 2 dimensional grid
 *
 * @grid: Multidimensional array of integers
 * @height: Height of the grid
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

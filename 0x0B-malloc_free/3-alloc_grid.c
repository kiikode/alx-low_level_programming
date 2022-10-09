#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers
 *
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(sizeof(int *) * height);
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		gridout[a] = malloc(sizeof(int) * width);
		if (gridout[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridout[a]);
			free(gridout);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			gridout[a][b] = 0;
	return (gridout);
}

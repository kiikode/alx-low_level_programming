#include <stdlib.h>
#include "main.h"

/**
 * array_range - Create an array of integers
 *
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to array created
 */
int *array_range(int min, int max)
{
	int *array;
	int a;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		array[a] = min;
	return (array);
}

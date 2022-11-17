#include "function_pointers.h"

/**
 * int_index - Search for an integer
 *
 * @array: Input array
 * @size: Size of array
 * @cmp: Pointer to the function
 *
 * Return: Index of first element for which cmp does not
 * return 0. If no elements match, return -1. If size <= 0,
 * return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}

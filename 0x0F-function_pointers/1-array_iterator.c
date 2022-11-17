#include "function_pointers.h"

/**
 * array_iterator - Execute a function given as a parameter
 *
 * @array: Input array
 * @size: Size of array
 * @action: Pointer to the function
 *
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}

#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create an array of chars
 *
 * @size: Size of array
 * @c: Stored character
 *
 * Return: An array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		ptr[a] = c;
	return (ptr);
}

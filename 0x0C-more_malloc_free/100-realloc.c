#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocate a memory block
 *
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size of the allocated space for ptr in bytes
 * @new_size: New size of the new memory block in bytes
 *
 * Return: Value of ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);
	free(ptr);

	ptr = malloc(new_size);
	return (ptr);
}

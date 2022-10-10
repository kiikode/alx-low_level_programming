#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory
 *
 * @b: Bytes
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}

#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: Memory area destination
 * @src: Memory area source
 * @n: Bytes copied
 *
 * Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);
	return (dest);
}

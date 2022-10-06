#include "main.h"

/**
 * _strncpy - Copy a string
 *
 * @dest: Destination
 * @src: Source
 * @n: Amount of bytes
 *
 * Return: A copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

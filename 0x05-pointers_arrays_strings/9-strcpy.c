#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src,
 *  to the buffer pointed to by dest
 *
 *  @dest: destination
 *  @src: source
 *
 *  Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
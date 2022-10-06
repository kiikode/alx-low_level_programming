#include "main.h"

/**
 * _strcat - Concatenate two strings
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: One string
 */
char *_strcat(char *dest, char *src)
{
	in count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}

#include "main.h"

/**
 * _strlen - Get the length of a string
 *
 * @s: Pointer to a character
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

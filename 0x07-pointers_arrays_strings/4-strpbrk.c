#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes
 *
 * @s: First string
 * @accept: Second string
 *
 * Return: A pointer to the byte in s that matches a byte
 * in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}

#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenate two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: One string
 */
char str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int a, b, c, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	new_str = malloc(sizeof(char) * (a + b + 1));

	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		new_str[c] = s1[c];

	limit = b;
	for (b = 0; b <= limit; c++, b++)
		new_str[c] = s2[b];
	return (new_str);
}

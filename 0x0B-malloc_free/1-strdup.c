#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Return a pointer to a newly allocated space in memory
 *
 * @str: Pointer to a character
 *
 * Return: A pointer to a new character
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	new_str = (char *)malloc(sizeof(char) * (a + 1));

	if (new_str == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		new_str[b] = str[b];
	return (new_str);
}

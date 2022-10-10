#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenate two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: Bytes
 *
 * Return: Pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int str1, str2, sout, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (str1 = 0; s1[str1] != '\0'; str1++)
		;

	for (str2 = 0; s2[str2] != '\0'; str2++)
		;

	if (n > str2)
		n = str2;

	sout = str1 + n;

	new_str = malloc(sout + 1);

	if (new_str == NULL)
		return (NULL);

	for (a = 0; a < sout; a++)
		if (a < str1)
			new_str[a] = s1[a];
		else
			new_str[a] = s2[a - str1];

	new_str[a] = '\0';
	return (new_str);
}

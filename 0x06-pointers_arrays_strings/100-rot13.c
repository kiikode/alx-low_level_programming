#include "main.h"

/**
 * rot13 - Encode a string using rot13
 *
 * @s: A string
 *
 * Return: The encoded string
 */
char *rot13(char *s)
{
	int count = 0, i;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char enc[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alph[i])
			{
				*(s + count) = enc[i];
				break;
			}
		}
		count++;
	}
	return (s);
}

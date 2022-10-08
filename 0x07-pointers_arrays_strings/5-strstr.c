#include "main.h"

/**
 * _strstr - Locate a substring
 *
 * @haystack: A string
 * @needle: A substring
 * 
 * Return: A pointer to the beginning of the
 * located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *ihaystack;
	char *oneedle;

	while (*haystack != '\0')
	{
		ihaystack = haystack;
		oneedle = needle;

		while (*haystack != '\0' && *oneedle != '\0' && *haystack = *oneedle)
		{
			haystack++;
			oneedle++;
		}
		if (!*oneedle)
			return (ihaystack);
		haystack = ihaystack + 1;
	}
	return (0);
}

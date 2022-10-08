#include "main.h"

/**
 * _strlen_recursion - Return the length of a string
 *
 * @s: A string
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare - Compare each character of the string
 *
 * @s: A string
 * @n1: Smallest iterator
 * @n2: Largest iterator
 *
 * Return: Success
 */
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Detect if a string is a palindrome
 *
 * @s: A string
 *
 * Return: 1 if s is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}

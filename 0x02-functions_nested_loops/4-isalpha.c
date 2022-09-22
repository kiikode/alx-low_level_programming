#include "main.h"

/**
 * _isalpha: Check for alphabetic character
 *
 * @c: ASCII code for the characters
 *
 * Return: 1 if alphabetic and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

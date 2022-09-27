#include "main.h"

/**
 * _isupper - Check for uppercase characters
 *
 * @c: ASCII code for a character
 *
 * Return: 1 if uppercase, otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

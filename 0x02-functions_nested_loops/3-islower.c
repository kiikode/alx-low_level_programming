#include "main.h"

/**
 * _islower - Check for lowercase
 *
 * @c: ASCII code for the character
 *
 * Return: 1 for lowercase, 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

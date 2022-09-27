#include "main.h"

/**
 * _isdigit - Chech for digits
 *
 * @c: ASCII code for digits
 *
 * Return: 1 if a digit, otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

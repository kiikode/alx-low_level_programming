#include "main.h"

/**
 * _abs - Get the absolute value of an integer
 *
 * @n: Any integer
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}

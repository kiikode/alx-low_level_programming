#include "main.h"

/**
 * _abs - Get the absolute value of an integer
 *
 * Return: Always 0
 */
int _abs(int n)
{
	int n;

	if (n < 0)
	{
		return(-n);
	}
	else
	{
		return(n);
	}
	_putchar('\n');
}

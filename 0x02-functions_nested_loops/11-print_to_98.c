#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all numbers up to 98
 *
 * @n: Any integer
 *
 * Return: 0
 */
void print_to_98(int n)
{
	for (n = INT)
	{
		if (n < 98)
		{
			_putchar(n + 1);
		}
		else
		{
			_putchar(n - 1);
		}
		_putchar('\n');
	}
}

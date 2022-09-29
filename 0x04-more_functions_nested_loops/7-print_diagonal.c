#include "main.h"

/**
 * print_diagonal - Print a diagonal line n times
 *
 * @n: Number of times diagonal is printed
 *
 * Return: none
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (a < (n-1))
			_putchar('\n');
	}
	_putchar('\n');
}

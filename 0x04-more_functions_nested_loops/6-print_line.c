#include "main.h"

/**
 * print_line - Print a straight line n times
 *
 * @n: A symbol for underscore
 *
 * Return: A straight line
 */
void print_line(int n)
{
	int pr;

	for (pr = 0; pr < n; pr++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

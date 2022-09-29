#include "main.h"

/**
 * print_triangle - Print a triangle
 *
 * @size: Size of the triangle
 *
 * Return: Success
 */
void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 1; b < (size - 1); b++)
			_putchar(' ');
		for (b--; b < size; b++)
			_putchar(35);
		if (a < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

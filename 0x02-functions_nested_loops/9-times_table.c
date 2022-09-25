#include "main.h"

/**
 * times_table - Print the 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			_putchar(a * b);
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * times_table - Print the 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			_putchar(44);
			_putchar(32);
			if (c <= 9)
			{
				_putchar(32);
				_putchar(c);
			}
			else
			{
				_putchar(c / 10);
				_putchar(c % 10);
			}
		}
		_putchar('\n');
	}
}

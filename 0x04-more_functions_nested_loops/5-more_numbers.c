#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14, ten times
 *
 * Return: Success
 */
void more_numbers(void)
{
	int a, b;

	a = 0;

	while (a < 10)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10);
				_putchar(b % 10);
			}
		}
		_putchar('\n');
		a++;
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets in lowercase 10 times
 *
 * Return : Always 0
 */
void print_alphabet_x10(void)
{
	int b, a;

	b = 0;

	while (b < 10)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		b++;
	}
}

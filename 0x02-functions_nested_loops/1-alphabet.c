#include "main.h"

/**
 * print_alphabet - Print alphabets in lower case
 *
 * Return : Always 0
 */
void print_alphabet(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int b;

	for (b = 0; b < 26; b++)
	{
		_putchar(alph[b]);
	}
	_putchar('\n');
}

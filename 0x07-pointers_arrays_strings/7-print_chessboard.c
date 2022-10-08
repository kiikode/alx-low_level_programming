#include "main.h"

/**
 * print_chessboard - Print chessboard
 *
 * @a: Input pointer
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	unsigned int m, n = 0;

	for (m = 0; m < 64; m++)
	{
		if (m % 8 == 0 && m != 0)
		{
			n = m;
			_putchar('\n');
		}
		_putchar(a[i / 8][m - n]);
	}
	_putchar('\n');
}

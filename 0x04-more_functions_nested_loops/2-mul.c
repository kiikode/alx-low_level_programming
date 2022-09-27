#include "main.h"

/**
 * mul - multiply two integers
 *
 * @a: Random integer 1
 * @b: Random integer 2
 *
 * Return: The product
 */
int mul(int a, int b)
{
	int pr;

	pr = a * b;
	if ((a < 0 && b > 0) || (a > 0 && b < 0))
	{
		_putchar(pr);
	}
	else if (a < 0 && b < 0)
	{
		_putchar(-pr);
	}
	else
	{
		_putchar(pr);
	}
	_putchar('\n');
}

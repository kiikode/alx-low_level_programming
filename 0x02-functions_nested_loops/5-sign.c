#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * @n: Any number
 *
 * Return: 1 if number is greater than zero
 * 0 if number is zero and -1 if it is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else 
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}

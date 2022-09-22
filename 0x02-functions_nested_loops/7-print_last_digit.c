#include "main.h"

/**
 * print_last_digit - Get the last digit of a number
 *
 *@a: Any integer
 *
 * Return: Last digit
 */
int print_last_digit(int a)
{
	int li;

	li = a % 10;
	if (li < 0)
	{
		return (-li);
	}
	else
	{
		return (li);
	}
	_putchar('\n');

}

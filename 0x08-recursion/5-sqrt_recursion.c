#include "main.h"

/**
 * pow_op - Get the natural square root of a number
 *
 * @a: Number
 * @b: Iterator
 *
 * Return: Square root
 */
int pow_op(int a, int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
			return (b);
		else
			return (-1);
	}
	return (0 + pow_op(a, b + 1));
}

/**
 * _sqrt_recursion - Return the natural square root
 *
 * @n: Number
 *
 * Return: Natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (pow_op(n, 2));
}

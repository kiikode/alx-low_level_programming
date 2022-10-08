#include "main.h"

/**
 * is_prime - Verify if it is a prime number
 *
 * @a: Number
 * @b: Iterator
 *
 * Return: 1 if prime, else 0
 */
int is_prime(unsigned int a, unsigned int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(a, b + 1));
}

/**
 * is_prime_number - Detect if a number is a prime number
 *
 * @n: Given number
 * 
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}

#include "3-calc.h"

/**
 * op_add - Addition operation
 *
 * @a: First number
 * @b: Second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction operation
 *
 * @a: First number
 * @b: Second number
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication operation
 *
 * @a: First number
 * @b: Second number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division operation
 *
 * @a: First number
 * @b: Second number
 *
 * Return: The result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo operation
 *
 * @a: First number
 * @b: Second number
 *
 * Return: The remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

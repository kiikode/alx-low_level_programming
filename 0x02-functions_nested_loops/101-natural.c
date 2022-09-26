#include <stdio.h>

/*
 * main - Sum multiples of 3 and 5
 *
 * Return: The sum
 */
int main(void)
{
	int a, b;

	for (a >= 1; a <=1023; a++; b >= 1; b <= 1023; b++)
	{
		if ((a % 3 == 0) & (b % 5 == 0))
		{
			return (a + b);
			putchar('\n');
		}
	}
}

#include <stdio.h>

/*
 * main - Sum multiples of 3 and 5
 *
 * Return: The sum
 */
int main(void)
{
	int a, b;

	while (a < 1024 & b < 1024)
	{
		if ((a % 3 == 0) & (b % 5 == 0))
		{
			return (a + b);
			putchar('\n');
		}
		a++;
		b++;
	}
}

#include <stdio.h>

/**
 * main - Print the sum of multiples of 3 and 5
 *
 * Return: The sum
 */
int main(void)
{
	int a, b;

	for (a = 1; a <= 1023; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}

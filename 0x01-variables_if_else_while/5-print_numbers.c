#include <stdio.h>

/**
 * main - Print all single numbers in base 10
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}

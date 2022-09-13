#include <stdio.h>

/**
 * main - Print numbers from 0 to 9.
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}

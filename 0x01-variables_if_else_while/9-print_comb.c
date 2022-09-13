#include <stdio.h>

/**
 * main - Print numbers from 0 to 9 with commas and spaces.
 *
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
		if ( y != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

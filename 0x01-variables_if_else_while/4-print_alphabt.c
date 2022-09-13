#include <stdio.h>

/**
 * main - Exclude some alphabets
 *
 * Return: 0
 */
int main(void)
{
	char alphabt[24] = "abcdfghijklmnoprstuvwxyz";
	int c;

	for (c = 0; c < 24; c++)
	{
		putchar(alphabt[c]);
	}
	putchar('/n');
	return (0);
}

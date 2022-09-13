#include <stdio.h>

/**
 * main - Print alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char tebahpla[26] = "zyxwvutsrqponmlkjihgfedcba";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(tebahpla[x]);
	}
	putchar('\n');
	return (0);
}

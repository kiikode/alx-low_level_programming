#include <stdio.h>

/**
 * main - Print alphabets in lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alphas[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int b;

	for (b = 0; b < 52; b++)
	{
		putchar(alphas[b]);
	}
	putchar('\n');
	return (0);
}

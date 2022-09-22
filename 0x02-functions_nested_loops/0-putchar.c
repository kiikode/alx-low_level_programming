#include "main.h"

/**
 * main - Print _putchar as a message.
 *
 * Return: Always 0
 */
int main(void)
{
	char num[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		putchar(num[a]);
	}
	putchar('\n');
	return (0);
}

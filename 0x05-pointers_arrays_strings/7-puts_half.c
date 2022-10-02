#include "main.h"

/**
 * puts_half - Print the second half of a string
 *
 * @str: Pointer to a string of characters
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int count = 0, a;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		a = count / 2;
	else
		a = (count - 1) / 2;

	for (a++; a < count; a++)
		_putchar(str[a]);
	_putchar('\n');
}

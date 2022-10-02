#include "main.h"

/**
 * puts2 - Print the even characters of a string.
 *
 * @str: Pointer to a string of characters
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}

#include "main.h"

/**
 * _puts - Print a string to standard output
 *
 * @str: Pointer to a character
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}

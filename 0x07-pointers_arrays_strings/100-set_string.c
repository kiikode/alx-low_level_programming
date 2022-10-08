#include "main.h"

/**
 * set_string - Set the value of a pointer to a char
 *
 * @s: Source address
 * @to: Target address
 *
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}

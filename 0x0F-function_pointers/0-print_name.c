#include "function_pointers.h"

/**
 * print_name - Print a name
 *
 * @name: Input name
 * @f: Pointer to a function
 *
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

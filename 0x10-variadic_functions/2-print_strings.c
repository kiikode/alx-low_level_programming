#include "variadic_functions.h"

/**
 * print_strings - Print strings
 *
 * @separator: String to be printed between strings
 * @n: Number of strings to be passed
 *
 * Return: No return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_star(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}

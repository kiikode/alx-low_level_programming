#include <stdio.h>
#include "main.h"

/**
 * print_array - Print a certain number of integers
 *
 * @a: Pointer to integer
 * @n: Number of integers to print
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (; b < n; b++)
	{
		printf("%d", *(a + b));
		if (b != (n - 1))
			printf(", ");
	}
	printf("\n");
}

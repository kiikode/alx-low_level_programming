#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals
 *
 * @a: Input pointer
 * @size: Size of the matrix
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i, sum0 = 0, sum1 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum0 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum1 += *(a + i);
	}
	printf("%d, %d\n", sum0, sum1);
}

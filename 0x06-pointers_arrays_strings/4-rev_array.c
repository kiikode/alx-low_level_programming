#include "main.h"

/**
 * reverse_array - Reverse the content of an array
 *
 * @a: Array
 * @n: Number of elements of the array
 *
 * Return: Reversed order
 */
void reverse_array(int *a, int n)
{
	int p, q, r;

	for (p = 0; p < n - 1; p++)
	{
		for (q = p + 1; q > 0; q--)
		{
			r = *(a + q);
			*(a + q) = *(a + (q - 1));
			*(a + (q - 1)) = r;
		}
	}
}

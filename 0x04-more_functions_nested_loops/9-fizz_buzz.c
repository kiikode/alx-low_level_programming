#include <stdio.h>

/**
 * main - FizzBuzz Test
 *
 * Return: Success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		printf("%d ", num);
		if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
	}
	printf('\n');
}

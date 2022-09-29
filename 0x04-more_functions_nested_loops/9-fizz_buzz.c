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
		for (num % 3 == 0)
		{
			printf("Fizz ");
		}
		for (num % 5 == 0)
		{
			printf("Buzz ");
		}
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
	}
	printf('\n');
}

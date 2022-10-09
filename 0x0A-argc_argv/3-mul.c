#include <stdio.h>

/**
 * main - Multiply two numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, mul;

	for (i = 0; i < argc; i++)
	{
		mul = argv[1] * argv[2];
		if (i < 2)
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", mul);
	}
	return (0);
}

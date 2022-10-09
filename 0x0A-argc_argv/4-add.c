#include <stdio.h>

/**
 * main - Add positive numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
		printf("0\n");
	else if (argv[i] < 48 || argv[i] > 57)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			sum += argv[i];
		printf("%d\n", sum);
	}
	return (0);
}

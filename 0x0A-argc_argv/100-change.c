#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print minimum number of coins to make change for
 * an amount of money
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int coins, min_coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);

	while (coins > 0)
	{
		if (coins >= 25)
			coins -= 25;
		else if (coins >= 10)
			coins -= 10;
		else if (coins >= 5)
			coins -= 5;
		else if (coins >= 2)
			coins -= 2;
		else if (coins >= 1)
			coins -= 1;
		min_coins += 1;
	}
	printf("%d\n", min_coins);
	return (0);
}

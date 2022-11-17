#include "3-calc.h"

/**
 * main - Check the code
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	
	for (c = 0; c < 6; c++)
		if (operation != op_t ops[c])
		{
			printf("Error\n");
			exit(99);
		}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));
	return (0);
}

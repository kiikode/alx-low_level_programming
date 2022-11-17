#include "3-calc.h"

/**
 * get_op_func - Select the correct function to
 * perform the operation
 *
 * @s: Operator passed as argument
 *
 * Return: Pointer to the function that corresponds
 * to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
		{"*+/", NULL}
	};
	int a = 0;

	while (a < 10)
	{
		if (s[0] == ops->op[a])
			break;
		a++;
	}
	return (ops[a / 2].f);
}

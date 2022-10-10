#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _is_zero - Check if a number is zero
 *
 * @argv: Argument vector
 *
 * Return: Always 0
 */
void _is_zero(char *argv[])
{
	int a, n1 = 1, n2 = 1;

	for (a = 0; argv[1][a]; a++)
		if (argv[1][a] != '0')
		{
			n1 = 0;
			break;
		}

	for (a = 0; argv[2][a]; a++)
		if (argv[2][a] != '0')
		{
			n2 = 0;
			break;
		}

	if (n1 == 1 || n2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - Set memory to zero in a new array
 *
 * @ar: Character array
 * @lar: Length of ar
 *
 * Return: Pointer to a character array
 */
char *_initialize_array(char *ar, int lar)
{
	int a = 0;

	for (a = 0; a < lar; a++)
		ar[a] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - Check for the length and verify if number is in base 10
 *
 * @argv: Argument vector
 * @n: row of the array
 *
 * Return: Lenth of the number
 */
int _checknum(char *argv[], int n)
{
	int len;

	for (len = 0; argv[n][len]; len++)
		if (!isdigit(argv[n][len]))
		{
			printf("Error\n");
			exit(98);
		}
	return (len);
}

/**
 * main - Entry point, multiplying two positive numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add , addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = _checknum(argv, 1), ln2 = _checknum(argv, 2);
	_is_zero(argv), lnout = ln1 + ln2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, lnout);
	k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = add1 = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = ln1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = _initialize_array(nout, lnout);
			k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0' * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}

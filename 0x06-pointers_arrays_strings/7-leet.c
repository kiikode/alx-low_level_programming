#include "main.h"

/**
 * leet - Encode a string into leet
 *
 * @s: A string
 *
 * Return: The result
 */
char *leet(char *s)
{
	int count = 0, i;
	int low_lets[] = {97, 101, 111, 116, 108};
	int upp_lets[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_lets[i] || *(s + count) == upp_lets[i])
			{
				*(s + count) = nums[i];
				break;
			}
		}
		count++;
	}
	return (s);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 *
 * @b: pointer to the string
 *
 * Return: b == NULL || b != 1 || b != 0 ? 0 : convert
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = strlen(b);
	int i = len - 1;
	unsigned int result = 0;
	unsigned int pow = 1;
	int j, k = 0;
	unsigned int number;

	if (b == NULL)
		return (0);
	while (i >= 0)
	{
		number = b[i] - '0';
		if (number > 1)
			return (0);
		for (j = 0; j <= k; j++)
			pow = pow * 2;
		result += number * pow;
		i--;
		j++;
	}

	return (result / 2);
}

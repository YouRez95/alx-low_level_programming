#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
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
	unsigned int len;
	int i;
	unsigned int result;
	unsigned int pow;
	int j;
	unsigned int number;

	if (b == NULL)
		return (0);
	len = strlen(b);
	i = len - 1;
	result = 0;
	pow = 1;
	while (i >= 0)
	{
		number = b[i] - '0';
		if (number > 1 || isalpha(b[i]))
			return (0);
		for (j = 0; j <= 0; j++)
			pow = pow * 2;
		result += number * pow;
		i--;
		j++;
	}
	return (result / 2);
}

#include <stdio.h>
#include "main.h"
/**
 * print_binary - int to binary
 *
 * @n: integer
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, j, counter = 0;
	unsigned long int cpn = n;

	if (n == 0)
		_putchar('0');

	for (; n > 0; n >>= 1)
	{
		counter++;
	}

	for (i = counter - 1; i >= 0; i--)
	{
		j = cpn >> i;
		if (j & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

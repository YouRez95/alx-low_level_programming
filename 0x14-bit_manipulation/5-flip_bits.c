#include "main.h"

/**
 * flip_bits - flip between bits
 *
 * @n: number 1
 * @m: number 2
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count;

	count = 0;
	for (i = 32; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
			count++;
	}

	return (count);
}

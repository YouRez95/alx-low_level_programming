#include "main.h"
/**
 * get_bit - get bir by index;
 *
 * @n: n
 * @index: index
 *
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int j;

	if (index > 32)
		return (-1);

	if (n == 0)
		return (0);
	j = n >> index;
	if (j & 1)
		return (1);
	else
		return (0);
}

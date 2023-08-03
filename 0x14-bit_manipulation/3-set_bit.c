#include "main.h"
/**
 * set_bit - set bir by index;
 *
 * @n: n
 * @index: index
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 32)
		return (-1);


	*n = ((1 << index) | *n);
	return (1);
}

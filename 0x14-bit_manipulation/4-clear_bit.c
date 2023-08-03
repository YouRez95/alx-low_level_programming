#include "main.h"
/**
 * clear_bit - clear bit by index;
 *
 * @n: n
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 32)
		return (-1);


	*n = (~(1 << index) & *n);
	return (1);
}

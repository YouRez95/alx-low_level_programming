#include <stdio.h>
/**
 * swap_int - swipe two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int n = *b;
	*b = *a;
	*a = n;
}

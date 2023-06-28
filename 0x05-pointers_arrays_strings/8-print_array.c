#include <stdio.h>

/**
 * print_array - print elements of array
 *
 * @a: the array
 * @n: the lenght of a
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if  (i != n - 1)
		{
			printf(" ,");
		}
	}
	printf("\n");
}

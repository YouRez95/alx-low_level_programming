#include "main.h"
/**
 * print_diagonal - draws a diagonal
 *
 * @n: param
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		j = 0;
		for (i = 0 ; i < n ; i++)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

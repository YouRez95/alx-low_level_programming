#include <stdio.h>
#include "main.h"

/**
 * times_table - print ti;e table
 */
void times_table(void)
{
	 int  i, j, p;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			p = j * i;
			if (j == 0)
			{
				_putchar(p + '0');
			}

			if (p < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}

			if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

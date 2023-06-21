#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print  every minute
 */

void jack_bauer(void)
{
	char i, j, k, m;

	for (m = '0' ; m <= '2' ; m++)
	{
		for (k = '0' ; k <= '9' ; k++)
		{
			for (j = '0' ; j <= '5' ; j++)
			{
				for (i = '0' ; i <= '9' ; i++)
				{
					_putchar(m);
					_putchar(k);
					_putchar(':');
					_putchar(j);
					_putchar(i);
					_putchar('\n');
				}
			}
			if (m == '2' && k == '3')
				break;
		}
	}
}

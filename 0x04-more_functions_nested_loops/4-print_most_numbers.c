#include "main.h"
/**
 * print_most_numbers - print all numbers from 0 to 9 exept2 and 4
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}

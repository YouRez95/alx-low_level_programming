#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet 10 time
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}

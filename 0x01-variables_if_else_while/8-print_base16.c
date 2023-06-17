#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit;
	char letter;

	for (digit = 0 ; digit <= 9 ; digit++)
	{
		putchar('0' + digit);
	}
	for (letter = 'a' ; letter <= 'f' ; letter++)
	{
		putchar(letter);
		if (letter == 'f')
		{
			putchar('\n');
		}
	}
	return (0);
}

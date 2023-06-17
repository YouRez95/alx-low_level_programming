#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a' ; letter--)
	{
		putchar(letter);
		if (letter == 'a')
		{
			putchar('\n');
		}
	}
	return (0);
}

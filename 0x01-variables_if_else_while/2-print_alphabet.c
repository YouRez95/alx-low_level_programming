#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		putchar(letter);
		if (letter == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}

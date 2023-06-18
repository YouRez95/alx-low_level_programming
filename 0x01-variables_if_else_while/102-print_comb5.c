#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int first, second, third, foor;

	for (first = 0 ; first <= 9 ; first++)
	{
		for (second = 0 ; second <= 9 ; second++)
		{
			for (third = 0 ; third <= 9 ; third++)
			{
				for (foor = 0 ; foor <= 9 ; foor++)
				{
					/*if (first == second || second == third || first == third ||
					first > second || second > third)
					{
						continue;
					}*/
					if (first == second && second == third && third == foor)
					{
						continue;
					}
					if (first == third && second == foor)
					{
						continue;
					}
					putchar('0' + first);
					putchar('0' + second);
					putchar(' ');
					putchar('0' + third);
					putchar('0' + foor);
					/*if (first == 7 && second == 8 && third == 9)
					{
						break;
					}*/
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

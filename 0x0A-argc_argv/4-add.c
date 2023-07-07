#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: counter
 * @argv: array
 *
 * Return: 0 always Success
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


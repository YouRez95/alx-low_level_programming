#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: counter
 * @argv: array of pointers
 *
 * Return: 0 always Succes
 */

int main(int  argc, char **argv)
{
	long x1;
	long x2;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	x1 = strtol(argv[1], NULL, 10);
	x2 = strtol(argv[2], NULL, 10);
	printf("%ld\n", x1 * x2);
	return (0);
}

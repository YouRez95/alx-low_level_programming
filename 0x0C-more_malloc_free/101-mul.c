#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: counter
 * @argv: arrays
 *
 * Return: Succes 0
 */

int main(int argc, char *argv[])
{
	int produit;

	if (argc > 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	produit = atoi(argv[1]) * atoi(argv[2]);
	if (produit == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	printf("%d\n", produit);

	return (0);
}

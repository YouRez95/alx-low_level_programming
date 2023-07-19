#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry
 *
 * @argc: counter
 * @argv: array
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];

	if (strcmp(operator, "+") != 0 && strcmp(operator, "-") != 0 &&
			strcmp(operator, "*") != 0 &&
			strcmp(operator, "/") != 0 &&
			strcmp(operator, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((strcmp(operator, "/") == 0 && num2 == 0) ||
			(strcmp(operator, "%") == 0 && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}

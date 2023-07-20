#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 *
 * @separator: separator
 * @n: number of args
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pargs;

	va_start(pargs, n);
	for (i = 0; i < n ; i++)
	{
		int x = va_arg(pargs, int);

		printf("%d", x);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(pargs);
}

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

	if (n == 0)
		return;
	va_start(pargs, n);
	for (i = 0; i < n ; i++)
	{
		int x = va_arg(pargs, int);

		printf("%d", x);
		if (i == n - 1)
		{
			printf("\n");
			return;
		}
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(pargs);
}

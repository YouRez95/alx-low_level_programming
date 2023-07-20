#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - string
 *
 * @separator: separator
 * @n: number of elements
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pargs;

	va_start(pargs, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(pargs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(pargs);
}

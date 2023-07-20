#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 *
 * @format: format of args
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			char letter = (char) va_arg(args, int);

			printf("%c, ", letter);
		}

		if (format[i] == 'i')
		{
			int num = va_arg(args, int);

			printf("%d, ", num);
		}

		while (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			printf("%s, ", str);
			break;
		}
		i++;
	}

	printf("\n");
	va_end(args);

}

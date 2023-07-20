#include <stdarg.h>
/**
 * sum_them_all - sum all args
 *
 * @n: number of args
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list pargs;

	if (n == 0)
		return (0);
	va_start(pargs, n);
	for (i = 0; i < n; i++)
	{
		int y = va_arg(pargs, int);

		sum += y;
	}
	va_end(pargs);
	return (sum);
}

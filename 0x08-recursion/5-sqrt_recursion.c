#include <math.h>
#include <stdio.h>
/**
 * _sqrt_recursion - culcul square
 *
 * @n: the number
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	double fResult;
	int iResult;

	fResult = sqrt((double)n);
	iResult = fResult;

	if (fResult == iResult)
		return (iResult);
	else
		return (-1);
}

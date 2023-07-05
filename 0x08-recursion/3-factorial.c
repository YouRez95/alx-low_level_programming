/**
 * factorial - calcul factorial n!
 *
 * @n: the number
 *
 * Return: n>0 -> factorial || n=0 -> 1 || -1
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

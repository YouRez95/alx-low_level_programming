/**
 * _strlen_recursion - count the length of string
 *
 * @s: my string
 *
 * Return: tle lenght of s
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

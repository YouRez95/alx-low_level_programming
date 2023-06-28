#include <stdio.h>
#include <string.h>
/**
 * rev_string - this function will be return a  string in reverse
 *
 * @s: string params
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int length = strlen(s);
	char *reversed[10];

	for (i = 0 ; i < length ; i++)
	{
		*reversed[i] = s[length - i - 1];
	}
	/*printf("the reverse s is : %s\n", reversed);*/
	s = *reversed;
}

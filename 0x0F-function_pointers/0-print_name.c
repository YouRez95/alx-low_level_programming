/**
 * print_name - function that call
 * the fuction pointer that will be print the name
 *
 * @name: the name will be printed
 * @f: function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
		return;
	f(name);
}

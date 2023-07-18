#include <stdio.h>
#include "dog.h"
/**
 * print_dog - func
 *
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL && d->owner == NULL && d->age == 0)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

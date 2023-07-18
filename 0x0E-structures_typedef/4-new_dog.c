#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create new dog
 *
 * @name: pointer
 * @age: age
 * @owner: pointer
 *
 * Return: NULL if function fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}

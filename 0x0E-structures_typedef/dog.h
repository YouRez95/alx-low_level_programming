#ifndef DOG_H
#define DOG_H


/**
 * struct dog - list of dogs
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

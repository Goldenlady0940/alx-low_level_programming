#include "dog.h"

/**
 * init_dog - intializes a variable type dog
 * @d: struct var type dog
 * @name: name to be initialized
 * @age: age 
 * @owner: owner
 * 
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

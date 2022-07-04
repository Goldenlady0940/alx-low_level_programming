#include "dog.h"
#include <stdio.h>

/**
 * init_dog - intializes a variable type dog
 * @d: pointer struct var type dog
 * @name: name to be initialized
 * @age: age of dog
 * @owner: owner of dog
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

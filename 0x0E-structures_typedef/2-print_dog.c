#include "dog.h"

/**
 * print_dog - prints the struct info
 * @d: struct pointer
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL && d->age != NULL && d->owner != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n)";
		printf("Owner: (nil)\n");
	}
}

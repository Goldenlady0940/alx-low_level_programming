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
	if (d.name != NULL && d.age != NULL && d.owner != NULL)
	{
		printf("Name: %s", d.name);
		printf("Age: %.1f", d.age);
		printf("Owner: %s", d.owner);
	}
	else
	{
		printf("Name: (nil)");
		printf("Age: (nil)");
		printf("Owner: (nil)");
	}
}

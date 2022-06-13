#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 *
 * Return: void
 */

void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i != '\0'; i ++)
	{
		if (i % 2 == 0)
			puts(str);
		continue;
	}
}

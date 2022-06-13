#include "main.h"

/**
 * puts - prints every other character of a string
 * @str: the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, s= strlen(str);

	for (i = 0; i <= s; i++)
	{
		if (i % 2 == 0)
			puts(str);
		continue;
	}
}

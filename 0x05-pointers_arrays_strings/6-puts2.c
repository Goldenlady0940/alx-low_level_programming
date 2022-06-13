#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, s;

	s = &str;

	for (i = 0; i <= strlen(s); i++)
	{
		if (i % 2 == 0)
			puts(str);
		continue;
	}
}

#include "main.h"

/**
 * string_toupper - changes lower to upper
 * @c: string to be changed
 *
 * Return: char
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
	}
	return (c);
}

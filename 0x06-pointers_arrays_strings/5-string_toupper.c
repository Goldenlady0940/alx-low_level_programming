#include "main.h"

/**
 * string_toupper - changes lower to upper
 * @c: letter to be changed
 *
 * Return: char
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; i <= strlen(c); i++)
	{
		if (c >= 'a' && c <= 'z')
		{
			*c += 32;
		}
	}
	return (c);
}

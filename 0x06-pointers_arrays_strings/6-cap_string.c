#include "main.h"

/**
 * cap_string - capitalize all string
 * @c: strign to be capitalized
 * 
 * Return: char
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == " ")
		{
			if (c[i + 1] >= 'a' && c[i + 1 <= 'z')
			{
				c[i] -= 32;
			}
		}
	}
	return (c);
}

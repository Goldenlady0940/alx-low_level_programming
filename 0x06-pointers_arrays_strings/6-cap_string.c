#include "main.h"

/**
 * cap_string - capitalize all string
 * @c: string to be capitalized
 * 
 * Return: char
 */

char *cap_string(char *c)
{
	int i;

	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] -= 32;
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		switch (c[i])
		{
			case ',': case '.': case '!': case '?': case ';': case '"': case '(': case ')': case '{': case '}': case ' ': case '\t': case '\n':
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
					c[i + 1] -= 32;
		}
	}
	return (c);
}

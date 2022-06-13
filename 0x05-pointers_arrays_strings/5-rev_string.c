#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *str;

	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		str[i] = s[i];
	}
	_putchar(str);
}

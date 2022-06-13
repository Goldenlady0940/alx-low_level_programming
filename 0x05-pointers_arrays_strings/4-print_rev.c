#include "main.h"

/**
 * print_rev: prints reverse of a string
 * @s: string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	char str;

	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		str[i] = s[i];
	}
	puts(str);
}

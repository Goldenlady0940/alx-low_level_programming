#include "main.h"

/**
 * print_rev: prints reverse of a string
 * @s: string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, len, temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	puts(s);
}

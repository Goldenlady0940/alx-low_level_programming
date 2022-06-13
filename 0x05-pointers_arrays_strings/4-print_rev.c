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

	len = strlen(str);

	for (i = 0); i <= len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	puts(str);
}

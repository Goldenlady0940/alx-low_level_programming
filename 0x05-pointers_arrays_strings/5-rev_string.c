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

	int i, len, temp;

	for (i = 0; i <= len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str1[len -i - 1] = temp;
	}
	_putchar(str);
}

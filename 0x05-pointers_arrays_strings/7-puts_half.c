#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, n, len;

	len = strlen(str);

	n = (strlen(str) - 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	//base case
	int i = 0;
	if (s[i] == '\0')
		return;
	_print_rev_recursion(s);
	i++;
	_putchar(s[i]);
}

#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putschar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putschar('\n');
}

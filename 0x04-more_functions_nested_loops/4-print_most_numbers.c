#include "main.h"

/**
 * print_most_numbers - print numbers 0-9 except 2 n 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for( i = 48; i < 58; i++)
	{
		if (i != 50 || i != 62)
			putchar(i);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: integer to be checked
 * Return: value
 */
int print_last_digit(int i)
{
	int ld = i % 10;

	if (i < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}

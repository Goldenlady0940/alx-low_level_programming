#include "main.h"
/**
 * main - Entry point
 * _isdigit - checks for digit
 * @c: number to be checked
 * Return: 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	char i;

	i = (char)c;
	if (i >= 0 && i <= 9)
		return (1);
	else
		return (0);
}

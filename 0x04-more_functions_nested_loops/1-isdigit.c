#include "main.h"

/**
 * _isdigit - checks if digit
 * @c: digit to be checked
 * Return: 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * main - Entry point
 * _isdigit - checks for digit
 * @c: number to be checked
 * Return: 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}

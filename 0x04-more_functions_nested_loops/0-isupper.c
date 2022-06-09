#include "main.h"

/**
 * _isupper: checks for upper case characters
 * @c: character to be checked
 * Return: 1 if upper, otherwise 0
 * main - Entry point 
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _islower - returns 1 if lower else 0
 * @c: takes character
 * Return: 0 is upper 1 if lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

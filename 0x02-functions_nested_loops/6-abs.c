#include "main.h"
/**
 * _abs - computes the absolute value of an int
 * @i: integer to computed
 * Return: the value
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}

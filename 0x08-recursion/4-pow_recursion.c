#include "main.h"

/**
 * _pow_recursion - calucates the power of a number raised to other
 * @x: base
 * @y: eexponent
 *
 * Return: power which is an int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

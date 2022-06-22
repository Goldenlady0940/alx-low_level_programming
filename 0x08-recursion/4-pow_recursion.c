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
	//base case
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

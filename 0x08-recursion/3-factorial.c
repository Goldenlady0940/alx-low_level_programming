#include "main.h"

/**
 * factorial - calculates factorial of a number
 * @n: number to be factorial
 *
 * Return: factorial which is an int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n * factorial(n - 1));
}

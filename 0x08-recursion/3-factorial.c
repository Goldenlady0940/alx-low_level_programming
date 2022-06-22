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
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

#include "variadic functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - adds all the parameters
 * @n: number of arguements
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(numbers,n);
	for(i = 0; i < n; i++)
		sum += va_arg(numbers, int);
	va_end(numbers);
	return(sum);
}

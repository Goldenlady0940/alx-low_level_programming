#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int arr[n];

	for (i = n; i < 0; i--)
	{
		arr[i] = a[i - 1];
	}
}

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
	int temp, i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = a[i];
			a[i] = a[n - i];
			a[n - i] = temp;
		}
	}
}

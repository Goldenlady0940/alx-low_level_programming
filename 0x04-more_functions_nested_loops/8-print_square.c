#include "main.h"

/**
 * print_square - prints a square
 * size: size of the square
 */

void print_square(int size)
{
	char i, j;

	if (size > 0)
	{
		for (i == 0; i < size; i++)
		{ 
			for (j == 1; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
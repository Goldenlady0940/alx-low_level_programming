#include "main.h"

/**
 * print_diagonal - diagonal line
 * @n: size for the diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	char a, b;

        if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (a != b)
					_putchar(' ');
				else
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}

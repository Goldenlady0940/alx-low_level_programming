#include "main.h"

/**
 * more_numbers - prints 0 - 14 10 times
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 48; i <= 62; i++)
	{
		if (i >= 58)
		{
			j = i / 10 + '0';
			k = i % 10 + '0';
			_putchar(j);
			_putchar(k);
		}
		else
		{
			_putchar(i);
		}
	}
}

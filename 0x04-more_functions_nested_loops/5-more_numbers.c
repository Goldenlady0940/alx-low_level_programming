#include "main.h"

/**
 * more_numbers - prints 0 - 14 10 times
 */

void more_numbers(void)
{
	int i;

	for (i = 48; i <= 62; i++)
	{
		if (i >= 58)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else
		{
			_putchar(i);
		}
	}
}

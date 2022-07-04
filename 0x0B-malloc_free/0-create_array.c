#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of charcters and initialize with single char
 * @size: size of the aray
 * @c: character
 *
 * Return: char pointer array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(c) * size);
			if (arr == NULL)
				return (NULL);
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
	}
	return (arr);
}


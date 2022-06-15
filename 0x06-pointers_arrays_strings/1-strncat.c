#include "main.h"

/**
 * _strncat - concatinates n number of two strings
 * @dest: destination
 * @src: souce
 * @n: nummber of string to be concatinated
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] < n; i++)
	{
		dest[i] = dest[i] + src[i];
	}
	return (dest);
}

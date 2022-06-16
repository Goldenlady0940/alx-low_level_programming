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
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (b < n && src[b] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

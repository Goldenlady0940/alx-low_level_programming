#include "main.h"

/**
 * _strcat - appends the source with destination
 * @dest: deestination
 * @src: source
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] = '\0'; i++)
	{
		if (src[i] == '\0')
			dest[i] = dest[i] + src[i];
	}
	dest[i] = '\0';
	return (dest);
}

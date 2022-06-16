#include "main.h"

/**
 * _strncpy - a function to copy string src to dest
 * @dest: destination string
 * @src: source string
 * @n: size of the source string
 *
 * Return: the pasted dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	
	return (dest);
}

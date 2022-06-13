#include "main.h"

/**
<<<<<<< HEAD
 * *_strcpy - copies the string pointed to the src including the delimeter
 * @dest: copy destination
 * @src: copy source
 *
 * Return: char
=======
 * _strcpy - copies the string pointed to by source to dest
 * @src: source
 * @dest: destination
 *
 * Return : char
>>>>>>> f86d9aebb4defae7ae241047dc2b898252a1527d
 */

char *_strcpy(char *dest, char *src)
{
<<<<<<< HEAD

=======
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
>>>>>>> f86d9aebb4defae7ae241047dc2b898252a1527d

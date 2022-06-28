#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinates two strings
 * @s1: string one
 * @s2: sencond string
 *
 * Return: concatinated string type char
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i;

	s3 = malloc(sizeof(s1) + sizeof(s2));
	for (i = 0; s2[i] < '\0'; i++)
		s3[i] = s1[i] + s2[i];
	if (s3 == NULL)
		return (NULL);
	return (s3);
}

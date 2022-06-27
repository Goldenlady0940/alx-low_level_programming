#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - holds pointer pointing to a memory having copy of the parameter
 * @str: the strint parameter
 *
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(str));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < strlen(p); i++)
		p[i] = str[i];
	return (p);
}

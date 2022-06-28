#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatinates all arguments
 * @ac: total number of strings
 * @av: each string
 *
 * Return: concatinated char
 */

char *argstostr(int ac, char **av)
{
	char *arg;
	int i, len;

	for (i = 0; i < ac; i++)
		len += strlen(av[i]);
	arg = malloc(sizeof(char) * len);
	arg[0] = '\0';
	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 1; i < ac; i++)
		strcat(arg, av[i]);
	if (arg == NULL)
		return (NULL);
	return (arg);
}

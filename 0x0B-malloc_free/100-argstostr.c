#include "main.h"
#include <stdio.h>

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
	int i;

	arg = malloc(sizeof(char) * 3);
	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		arg[i] = av[i];
		_putchar('\n');
	}
	if (arg = NULL)
		return (NULL);
	return (arg);
}

#include "main.h"

/**
 * _print_rev_recursion - calculates the string length
 * @s: string to check the length
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i;

	//base case
	if (s == '\0')
		return 0;
	i = 1 + _strlen_recursion(s + 1);
	return (i);
}

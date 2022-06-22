#include "main.h"

/**
 * is_palindrome - checks palindrom
 * ispal - checks if equal
 * @i: row
 * @j: column
 * @s: number to be checked
 *
 * Return: 1 if pal and 0 if not
 */

int ispal(char *s, int i, int j)
{
	if (*s == j)
	{
		return 1;
	}
	if (s[i] != s[j])
	{
		return 0;
	}
	if (i < j + 1)
	{
		return (ispal(s, i + 1, j - 1));
	}
	else
	{
		return 1;
	}
}

int is_palindrome(char *s)
{
	int n;

	n = strlen(s);
	if (n != 0)
	{
		return ispal(s, 0, n - 1);
	}
	return ('\n');
}

#include "main.h"

/**
 * is_prime_number - checks if its prime number
 * @n: number to be checked
 *
 * Return: 1 on success
 */

int ispal(char *s, int i, int j)
{

    if (s == j)
        return 1;
    if (s[i] != s[j])
        return 0;
    if (i < j + 1)
        return (ispal(s, i + 1, j - 1));
    return 1;
}
int is_palindrome(char *s)
{

    int n = strlen(s);
    if (n != 0)
    {
        return ispal(s, 0, n - 1);
    }
}

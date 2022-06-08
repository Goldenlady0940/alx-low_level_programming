#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}

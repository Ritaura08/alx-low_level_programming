#include <stdio.h>

/**
 * main - entry
 * Return: Always 0
 */

int main(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r = r + 1)
	{
		putchar(r);
	}
	putchar('\n');

	return (0);
}

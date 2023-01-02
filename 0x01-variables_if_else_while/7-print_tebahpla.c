#include <stdio.h>

/**
 * main - entry
 * Return: Always 0
 */

int main(void)
{
	char g;

	for (g = 'z'; g >= 'a'; g--)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}

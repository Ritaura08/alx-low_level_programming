#include <stdio.h>

/**
 * main - entry
 * Return: Always 0
 */

int main(void)
{
	int num;
	char i;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			i = num + '0';
		else
			i = 'a' + num - 10;
		putchar(i);
	}
	putchar('\n');
	return (0);
}

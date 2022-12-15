#include "main.h"

/**
 * print_last_digit- Entry
 * @t: p
 * Return: 0
 */

int print_last_digit(int t)
{
	char l;

	l = t % 10;

	if (l < 0)
		l *= -1;

	_putchar(l + '0');

	return (0);
}

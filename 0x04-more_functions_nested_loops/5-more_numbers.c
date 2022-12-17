#include "main.h"

/**
 * more_numbers- entry
 * Return: 0
 */

void more_numbers(void)
{
	int ten;
	int x;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (x = '0'; x <= '14'; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 19) + '0');
		}
		_putchar('\n');
	}
}

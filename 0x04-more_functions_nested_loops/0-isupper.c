#include "main.h"

/**
 * _isupper- print uppercase character
 * @c: loop
 * Return: 0
 */

int _isupper(int c);
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

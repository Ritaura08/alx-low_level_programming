#include "main.h"

/**
  * _isdigit- print digits 0 through 9
  * @c: loop
  * Return: 0
  */

int _isdigit(int c)
{
	int x = 0;

	if (c >= '0' && c <= '9')

		x = 1;

	return (x);
}


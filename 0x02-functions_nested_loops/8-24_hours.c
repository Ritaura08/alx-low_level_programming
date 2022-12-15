#include "main.h"

/**
 * Jack_bauer- Entry
 * Return: 0
 */

void jack_bauer(void)
{
	//loop over evry hour in a day
	for (int hour = 0; hour < 24; hour++)
	{
		//loop over every minute in the current hour
		for (int minute = 0; minute < 60; minute++)
		{
			// Print the hour as two digits, padding with a leading zero if necessary
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			// Print a colon as a seperator between the hour and minute values
			_putchar(':');
			//Print the minute as two digits, padding with a leading zero if necessary
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			// Move to the hext line
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack Bauer
 * from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int min, hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
				_putchar(':');
			}
			_putchar(hour + '0');
			_putchar(':');

			if (min < 10)
			{
				_putchar('0');
				_putchar(min + '0');
			}
			_putchar(min + '0');
			_putchar('\n');
		}
	}
}

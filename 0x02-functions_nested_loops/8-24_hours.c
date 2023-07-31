#include "main.h"

/**
 * jack_bauer - prints every minute in jack baurs day
 *
 * Return: void.
 */

void print_time(int time);

void jack_bauer(void)
{
	int hours, mins;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			print_time(hours);
			_putchar(':');
			print_time(mins);
			_putchar('\n');
		}
	}
}




void print_time(int time)
{
	_putchar(time / 10 + '0');
	_putchar(time % 10 + '0');
}

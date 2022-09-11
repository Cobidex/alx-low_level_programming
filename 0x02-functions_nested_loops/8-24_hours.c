#include "main.h"

/**
 * jack_bauer - prints every second of every day
 *
 * Return: set to zero if success
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;
	while (a < 3)
	{
		b = 0;
		while (b < 4)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

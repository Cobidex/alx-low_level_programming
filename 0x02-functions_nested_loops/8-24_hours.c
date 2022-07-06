#include "main.h"

/**
 * jack_bauer - prints every second of every day
 *
 * Return: set to zero if success
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 48;
	while (a < 51)
	{
		b = 48;
		while (b < 52)
		{
			c = 48;
			while (c < 54)
			{
				d = 48;
				while (d < 58)
				{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
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

#include <stdio.h>

/**
 * main - print out 4 digits
 *
 * Description: output using nested loops
 *
 * Return: set to 0 if successful
 */
int main(void)
{
	int a, b, c, d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;
	while (a < 58)
	{
		b = a + 1;
		c = a + 2;
		d = a + 3;
		while (b < 58)
		{
			c = b + 1;
			d = b + 2;
			while (c < 58)
			{
				d = c + 1;
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a < 58 || b < 57 || c < 58 || d < 58)
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}

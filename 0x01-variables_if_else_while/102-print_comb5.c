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
	while (a < 58)
	{
		b = 58;
		while (b < 58)
		{
			c = a;
			d = b + 1;
			while (c < 58)
			{
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a < 57 || b < 56 || c < 57 || d < 57)
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
				c++;
				d = 48;
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}

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
	int a, b, c, d, count = 1;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				d = 0;
				while (d < 10)
				{
					if (a <= c && b < d)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
						if (count < 9899)
						{
							putchar(',');
							putchar(' ');
						}
					}
					++count;
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

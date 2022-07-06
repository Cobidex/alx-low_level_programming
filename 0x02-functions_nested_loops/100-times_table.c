#include "main.h"

/**
 * print_times_table - prints n table
 * @n: integer
 *
 * Return: set to 0 if successful
 */
void print_times_table(int n)
{
	int b, nb;

	b = 0;
	nb = n * b;
	if (n < 16 || n < 0)
	{
		for (n = 0; n < 16; n++)
		{
			for (b = 0; b < 16; b++)
			{
				if (nb == 0)
					_putchar('0');
				if (nb > 0 && nb < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(nb % 10 + '0');
				}
				if (nb >= 10 && nb < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((nb / 10) + '0');
					_putchar(nb % 10 + '0');
				}
				if (nb <= 100 && nb < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((nb / 100) + '0');
					_putchar((nb / 10) % 10 + '0');
				}
			}
		}
	}
}

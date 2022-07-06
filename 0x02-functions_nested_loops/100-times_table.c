#include "main.h"

/**
 * print_times_table - prints n table
 * @n: integer
 *
 * Return: set to 0 if successful
 */
void print_times_table(int n)
{
	int a, b, ab;

	if (n < 16 || n >= 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				ab = a * b;
				if (ab == 0)
					_putchar('0');
				else if (ab < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(ab % 10 + '0');
				}
				else if (ab >= 10 && ab < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((ab / 10) + '0');
					_putchar(ab % 10 + '0');
				}
				else if (ab >= 100 && ab < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((ab / 100) + '0');
					_putchar((ab / 10) % 10 + '0');
					_putchar(ab % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}

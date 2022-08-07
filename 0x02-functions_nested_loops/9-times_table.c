#include "main.h"

/**
 * times_table - prints n times table
 * Return: void
 */

void times_table(void)
{
	int i = 0, j, product = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			product = i * j;
			if (product < 10)
			{
				_putchar(product + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

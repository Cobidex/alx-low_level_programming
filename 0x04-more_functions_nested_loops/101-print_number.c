#include <stdio.h>
#include "main.h"

/**
 * print_number - prints any integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	if (n < 10 && n > 0)
		_putchar(n % 10 + '0');
	if (n > 9 && n < 100)
	{
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n > 99 && n < 1000)
	{
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n > 999 && n < 10000)
	{
		_putchar((n / 1000) % 10 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n < 0 && n > -10)
	{
		_putchar(45);
		_putchar((-n % 10) + '0');
	}
	if (n < -9 && n > -100)
	{
		_putchar(45);
		_putchar(((-n / 10) % 10) + '0');
		_putchar((-n % 10) + '0');
	}
	if (n == 0)
		_putchar('0');
}

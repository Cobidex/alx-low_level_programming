#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a number to stdout
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	int sign = 1;

	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	if (n < 10 && n >= 0)
	{
		if (sign < 0)
			_putchar('-')
		_putchar(n + '0');
	if (n >= 10 && n < 100)
	{
		if (sign < 0)
			_putchar('-');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
	if (n >= 100 && n < 1000)
	{
		if (sign < 0)
			_putchar('-');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
	if (n >= 1000 && n < 10000)
	{
		if (sign < 0)
			_putchar('-');
		_putchar((n / 1000) % 10 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
}

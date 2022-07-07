#include "main.h"

/**
 * print_line - prints out line
 * @n: integer
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
			_putchar('_');
		_putchar(10);
	}
	else
		_putchar(10);
}

#include "main.h"

/**
 * print_last_digit - print last digit
 * @c: integer
 *
 * Return: return last digit
 */
int print_last_digit(int c)
{
	int a;

	a = c % 10;
	if (a < 0)
		a = a * -1;
	_putchar(a);
	return (a);
}

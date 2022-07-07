#include "main.h"

/**
 * print_most_numbers - prints out numbers
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	a = 48;
	for (a = 48; a < 58; a++)
	{
		if (a != 50 || a != 52)
		{
			_putchar(a);
			_putchar(10);
		}
	}
}

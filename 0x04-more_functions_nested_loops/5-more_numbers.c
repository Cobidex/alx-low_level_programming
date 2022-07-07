#include "main.h"

/**
 * more_numbers - prints numbers
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	a = 0;
	b = 0;
	for (a = 0; a < 11; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar(10);
	}
}

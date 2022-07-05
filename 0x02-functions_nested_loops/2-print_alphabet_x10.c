#include "main.h"

/**
 * print_alphabet_x10 - print out lower case 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a, n;

	n = 1;
	for (n = 1; n < 11; n++)
	{
		a = 97;
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}

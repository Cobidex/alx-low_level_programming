#include "main.h"

/**
 * print_alphabet - print out lower case 10 times
 *
 * Description: print using while loop
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a, n;

	n = 0;
	for (n = 0; n < 11; n++)
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

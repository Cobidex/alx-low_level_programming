#include "main.h"

/**
 * print_alphabet - print out lower case 10 times
 *
 * Description: print using while loop
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a, n;

	a = 97;
	n = 0;
	for (n = 0; n < 11; n++)
	{
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}

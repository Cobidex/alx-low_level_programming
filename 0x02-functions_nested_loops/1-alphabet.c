#include "main.h"

/**
 * print_alphabet - print out lower case
 *
 * Description: print using while loop
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

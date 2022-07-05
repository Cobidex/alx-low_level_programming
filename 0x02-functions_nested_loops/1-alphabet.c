#include "main.h"

void print_alphabet(void);

/**
 * main - begin here
 *
 * Description: outputs above function
 *
 * Return: set to 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
		putchar(a);
		a++;
	}
	putchar(10);
}

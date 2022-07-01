#include <stdio.h>

/**
 * main - print out alphabet
 *
 * Description: print lower case alphabet
 * using putcharand for loop
 *
 * Return: set to 0
 */
int main(void)
{
	int a;

	a = 97;
	for (a = 97; a <= 123; a++)
		putchar(a);
	return (0);
}

#include <stdio.h>

/**
 * main - output numbers
 *
 * Description: print out using only putchar
 *
 * Return: set to 0 if success
 */
int main(void)
{
	int a;

	a = 48;
	for (a = 48; a < 58; a++)
		putchar(a);
	putchar(10);
	return (0);
}

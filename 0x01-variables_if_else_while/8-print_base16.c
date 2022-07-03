#include <stdio.h>

/**
 * main - print hexadecimal
 *
 * Description: print numbers 0 - 9 then a -b
 *
 * Return: set to 0 if success
 */
int main(void)
{
	int a;

	a = 48;
	for (a = 48; a < 58; a++)
		putchar(a);
	for (a = 97; a < 103; a++)
		putchar(a);
	putchar(10);
	return (0);
}

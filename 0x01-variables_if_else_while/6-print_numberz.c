#include <stdio.h>

/**
 * main - print single digit numbers
 *
 *
 * Description: print single digit numbers using putchar
 *
 *
 * Return: Always 0 if success
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

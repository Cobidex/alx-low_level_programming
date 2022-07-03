#include <stdio.h>

/**
 * main - print out combinations of integers
 *
 * Description: print with only putchar
 *
 * Return: set to 0 if successful
 */
int main(void)
{
	int a;

	a = 48;
	for (a = 48; a < 57; a++)
	{
		putchar(a);
		putchar(44);
		putchar(32);
	}
	putchar(57);
	return (0);
}

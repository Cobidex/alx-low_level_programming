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
	while (a < 58)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(44);
			putchar(32);
		}
		a += 1;
	}
	putchar(10);
	return (0);
}

#include <stdio.h>

/**
 * main - print all lower case alphabet without q and e
 *
 * Description: print out all lower case and exclude q and e
 * using bolean
 *
 * Return: set to 0
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		if (a != 101 && a != 113)
		{
		putchar(a);
		a += 1;
		}
		putchar(10);
	}
	return (0);
}

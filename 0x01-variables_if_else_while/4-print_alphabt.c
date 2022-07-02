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
	int a;

	a = 97;
	for (a = 97; a < 123; a++)
	{
		if (a == 101 || a == 113)
		{
		a += 1;
		}
		putchar(a);
	}
	putchar(10);

	return (0);
}

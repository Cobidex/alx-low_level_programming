#include <stdio.h>

/**
 * main - print lower and upper case
 *
 * Description: print out upper and lower case and
 * end with a new line
 *
 * Return: set to 0
 */
int main(void)
{
	int a;

	a = 97;
	for (a = 97; a < 123; a++)
		putchar(a);
	for (a = 65; a < 91; a++)
		putchar(a);
	putchar(10);
	return (0);
}

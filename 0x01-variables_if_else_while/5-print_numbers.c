#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int a;

	a = 0;
	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar(10);
	return (0);
}

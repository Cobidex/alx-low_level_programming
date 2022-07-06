#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print towards n
 * @n: integer
 *
 * Return: set to void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d", n);
	printf("\n");
}

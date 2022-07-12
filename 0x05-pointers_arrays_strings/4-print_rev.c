#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string
 * @*s: string pointer
 * Return: void
 */

void print_rev(char *s)
{
	int count, a, b;
	char t;

	count = 0;
	for (a = 0; a != '\0'; a++)
		count++;
	for (b = count; b >= 0; b--)
	{
		t = *(s + b);
		_putchar(t);
	}
}

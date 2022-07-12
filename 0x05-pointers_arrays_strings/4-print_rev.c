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
	char v[count];

	count = 0;
	for (a = 0; a != '\0'; a++)
	{
		v[a] = *(s + a);
		count++;
	}
	for (b = count; b >= 0; b--)
		_putchar(v[b]);
}

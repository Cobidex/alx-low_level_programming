#include "main.h"

/**
 * _puts - prints out
 * @str: string
 * @*str: string pointer
 * Return: void
 */

void _puts(char *str)
{
	int a, s;

	for (a = 0; s != '\0'; a++)
	{
		s = *(str + a);
		_putchar(s);
	}
}

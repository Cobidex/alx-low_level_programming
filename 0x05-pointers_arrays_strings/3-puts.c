#include "main.h"

/**
 * _puts - prints out
 * @str: string
 * @*str: string pointer
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar(10);
}

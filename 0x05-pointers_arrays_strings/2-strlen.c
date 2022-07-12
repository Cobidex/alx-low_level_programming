#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return length of string
 * @*s: pointer to s
 * @s: string
 * Return: set to n
 */

int _strlen(char *s)
{
	int n, a;

	a = 1;
	for (n = 0; *s != '\0'; n++)
	{

		_putchar(*(s + n));
		a++;
	}
	return (a);
}

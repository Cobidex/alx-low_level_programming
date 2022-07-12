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
	int n, a, b;

	a = 1;
	for (n = 0; b != '\0'; n++)
	{
		b = *(s + n);
		a++;
	}
	return (a);
}

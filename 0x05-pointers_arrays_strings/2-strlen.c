#include "main.h"

/**
 * _strlen - return length of string
 * @*s: pointer to s
 * @s: string
 * Return: set to n
 */

int _strlen(char *s)
{
	int n, a, b;

	a = 0;
	n = 1;
	while (b != '\0')
	{
		b = *(s + n);
		a++;
		n++;
	}
	return (a);
}

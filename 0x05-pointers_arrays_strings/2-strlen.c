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
	int n;

	n = 0;
	for (*s = *s; *s != 0; *s++)
		n++;
	return (n);
}

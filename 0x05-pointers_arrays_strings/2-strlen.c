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

	for (n = 0; *s != '\0'; n++)
		*s = *(s + n);
	return (n);
}

#include "main.h"

/**
 * _strlen - return length of string
 * @*s: pointer to s
 * @s: string
 * Return: set to n
 */

int _strlen(char *s)
{
	int n;

	for (; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}

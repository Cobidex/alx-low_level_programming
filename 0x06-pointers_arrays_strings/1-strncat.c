#include "main.h"

/**
 * _strncat - functions that concatenates
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (src[b] == '\0')
		dest[a] = '\0';
	else
	{
		dest[a] = src[b];
		a++;
		dest[a] = '\0';
	}
	return (dest);
}

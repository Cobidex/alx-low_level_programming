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
	while (src[b] && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a + n + 1] = '\0';
	return (dest);
}

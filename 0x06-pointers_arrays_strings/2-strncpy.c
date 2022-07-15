#include "main.h"

/**
 * _strncpy - copies string
 * @dest: first pointer
 * @src: second pointer
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

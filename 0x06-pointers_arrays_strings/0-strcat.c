#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: pointer 1
 * @src: pointer 2
 * Return: o if successful
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

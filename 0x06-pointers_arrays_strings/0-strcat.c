#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: pointer 1
 * @src: pointer 2
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *new = dest;
	char *d;
	int a, c;

	a = 0;
	c = 0;
	d = new + c;
	for (new = new; *new = '\0'; new++)
		c++;
	for (d = src; *src = '\0'; d++)
		a++;
	dest = new;
	return (dest);
}

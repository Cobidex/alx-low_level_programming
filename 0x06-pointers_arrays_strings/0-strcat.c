#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: pointer 1
 * @src: pointer 2
 * Return: o if successful
 */

char *_strcat(char *dest, char *src)
{
	char *new;
	int a, b, c;

	a = 0;
	b = 0;
	c = 0;
	while (*dest != '\0')
	{
		new = (new + a);
		a++;
	}
	for (src = src; *src = '\0'; src++)
	{
		*(new + b) = *(src + b);
		b++;
	}
	for (new = dest; new = '\0'; new++)
	{
		*(dest + c) = *(new + c);
		c++;
	}
	return (0);
}

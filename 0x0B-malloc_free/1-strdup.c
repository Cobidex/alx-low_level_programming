#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to new string
 * @str: string to be cloned
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *p;
	int strl = 0;
	int b, a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (strl = 0; *str != '\0'; strl++)
	{
		*str = str[strl];
		a++;
	}

	p = malloc(sizeof(char) * a);
	if (p == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		*(p + b) = str[b];
	}
	return (p);
}

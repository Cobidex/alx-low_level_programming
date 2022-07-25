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
	while (str[a])
	{
		a++;
	}
	p = malloc((sizeof(char) * a) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (b < a)
	{
		p[b] = str[b];
		b++;
	}
	p[b] = '\0';
	return (p);
}

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array
 * @size: number of elements
 * @c: type
 * Return: NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		p[a] = c;
	}
	return (p);
}

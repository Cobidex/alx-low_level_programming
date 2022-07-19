#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to array
 * @src: character pointer
 * @n: an unsigned int
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p;
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	p = dest;
	return (p);
}

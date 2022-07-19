#include "main.h"

/**
 * _memset - adds a constant value
 * @s: pointer
 * @b: char variable
 * @n: unsigned int
 * Return: pointer r
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	char *r;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	r = s;
	return (r);
}

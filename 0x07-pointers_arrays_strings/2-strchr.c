#include "main.h"

/**
 * _strchr - locates character
 * @s: pointer to string
 * @c: character variable
 * Return: pointer to first occurence of char/Null
 */

char *_strchr(char *s, char c)
{
	char *p;
	int a, b;

	a = 0;
	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (s[b] == c)
		{
			p =  (s + a);
			return (p);
		}
	}
	return ('\0');
}

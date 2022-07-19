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
	unsigned int a;

	a = 0;
	while (s[a])
	{
		if (s[a] == c)
		{
			p =  (s + a);
			break;
		}
		if (s[a] == '\0')
		{
			p = 0;
			break;
		}
		a++;
	}
	return (p);
}

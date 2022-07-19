#include "main.h"

/**
 * _strpbrk - locates first char
 * @s: string
 * @accept: string chars
 * Return: pointr or null
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s = (s + a);
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}

#include "main.h"

/**
 * _strpbrk - locates first char
 * @s: string
 * @accept: string chars
 * Return: pointr or null
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b, c, d;

	a = 0;
	while (s[a])
		a++;
	while (accept[b])
		b++;
	for (c = 0; c < a; c++)
	{
		for (d = 0; d < b; d++)
		{
			if (s[c] == accept[d])
			{
				s = (s + c);
				return (s);
			}
		}
	}
	return ('\0');
}

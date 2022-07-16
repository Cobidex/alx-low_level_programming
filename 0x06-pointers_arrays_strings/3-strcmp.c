#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if success and 0 if not
 */

int _strcmp(char *s1, char *s2)
{
	int a, b, c, shr, diff;

	a = 0;
	while (s1[a])
		a++;
	b = 0;
	while (s2[b])
		b++;
	if (a <= b)
		shr = a;
	else
		shr = b;
	c = 0;
	while (c <= shr)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			diff = s1[c] - s2[c];
			break;
		}
		c++;
	}
	return (diff);
}

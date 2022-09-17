#include "main.h"

/**
 * rot13 - encode with roth
 * @p: string
 * Return: p
 */

char *rot13(char *p)
{
	int a;

	a = 0;
	while (p[a])
	{
		if (p[a] >= 'a' && p[a] <= 'z')
		{
			if (p[a] <= 'n')
				p[a] += 13;
			else
				p[a] -= 13;
		}
		if (p[a] >= 'A' && p[a] <= 'Z')
		{
			if (p[a] <= 'N')
				p[a] += 13;
			else
				p[a] -= 13;
		}
		a++;
	}
	return (p);
}

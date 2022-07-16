#include "main.h"

/**
 * leet - encodes
 * @p: string
 * Return: p
 */

char *leet(char *p)
{
	int a, b;
	char alp[] = {'a', 'e', 'o', 't', 'l'};
	int num[] = {'4', '3', '0', '7', '1'};

	a = 0;
	while (p[a])
	{
		b = 0;
		while (alp[b])
		{
			if (p[a] == alp[b] || p[a] + 32 == alp[b])
				p[a] = num[b];
			b++;
		}
		a++;
	}
	return (p);
}

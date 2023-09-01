#include "main.h"

/**
 * cap_string - capitalizes strings
 * @p: string to capitalize
 * Return: p
 */

char *cap_string(char *p)
{
	int a, b;

	char spc[14] = {',', '.', ';', '!', '?', '"', '(', ')',
	'{', '}', ' ', '\n', '\t'};


	a = 0;
	while (p[a])
	{
		if (a == 0)
		{
			if (p[a] >= 97 && p[a] <= 122)
				p[a] -= 32;
			a++;
		}
		b = 0;
		while (spc[b] && b < 14)
		{
			if (p[a] == spc[b])
			{
				a++;
				if (p[a] >= 97 && p[a] <= 122)
					p[a] -= 32;
			}
			b++;
		}
		a++;
	}
	return (p);
}

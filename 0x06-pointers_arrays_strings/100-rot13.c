#include "main.h"

/**
 * rot13 - encode with roth
 * @p: string
 * Return: p
 */

char *rot13(char *p)
{
	int a;
	char c, d;

	a = 0;
	while (p[a])
	{
		if ((p[a] >= 97 && p[a] <= 122) || (p[a] >= 65 && p[a] <= 90))
		{
			if (p[a] >= 97 && p[a] <= 122)
			{
				if (p[a] + 13 > 122)
				{
					c = (p[a] + 13) - 122;
					p[a] = 96 + c;
				}
				else
					p[a] += 13;
			}
			if (p[a] >= 65 && p[a] <= 90)
			{
				if (p[a] + 13 > 90)
				{
					d = (p[a] + 13) - 90;
					p[a] = 64 + d;
				}
				else
					p[a] += 13;
			}
		}
		a++;
	}
	return (p);
}

#include "main.h"

/**
 * rot13 - encode with roth
 * @p: string
 * Return: p
 */

char *rot13(char *p)
{
	int j = 0;

	while (p[j])
	{
		while ((p[j] >= 65 && p[j] <= 77) || (p[j] >= 97 && p[j] <= 109))
		{
			p[j] += 13;
			j++;
		}
		if ((p[j] >= 78 && p[j] <= 90) || (p[j] >= 110 && p[j] <= 122))
			p[j] -= 13;
		j++;
	}
	return (p);
}

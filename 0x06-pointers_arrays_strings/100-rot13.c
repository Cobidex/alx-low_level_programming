#include "main.h"

/**
 * rot13 - encode with roth
 * @p: string
 * Return: p
 */

char *rot13(char *p)
{
	int i = 0;

	while (p[i])
	{
		if ((p[i] >= 65 && p[i] <= 77) || (p[i] >= 97 && p[i] <= 109))
		{
			p[i] += 13;
		}
		else if((p[i] >= 78 && p[i] <= 90) || (p[i] >= 110 && p[i] <= 122))
		{
			p[i] -= 13;
		}
		i++;
	}
	return (p);
}

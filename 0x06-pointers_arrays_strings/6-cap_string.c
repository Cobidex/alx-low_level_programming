#include "main.h"

/**
 * cap_string - upper case
 * @p: pointer
 * Return: char
 */

char *cap_string(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
			p[a] -= 32;
		if (p[a] == '.')
		{
			a++;
			if (p[a] != ' ')
			{
				if (p[a] >= 97 && p[a] <= 122)
					p[a] -= 32;
			}
		}
		if (p[a] == ' ')
		{
			a++;
			if (p[a] >= 97 && p[a] <= 122)
				p[a] -= 32;
		}
		if (p[a] == '\n' || p[a] == '\t')
		{
			a++;
			if (p[a] >= 97 && p[a] <= 122)
				p[a] -= 32;
		}
		a++;
	}
	return (p);
}

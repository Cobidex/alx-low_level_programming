#include "main.h"

/**
 * _strstr - search for string
 * @haystack: parent string
 * @needle: search string
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, c, d, n;


	c = 0;
	d = 0;
	n = 0;
	while (needle[c])
	{
		c++;
	}
	a = 0;
	while (haystack[a])
	{
		b = 0;
		while (needle[b])
		{
			if (needle[b] == haystack[a])
			{
				d++;
				if (d == c)
				{
					a -= n;
					haystack += a;
					return (haystack);
				}
			}
			a++;
			n++;
			b++;
		}
		a -= n;
		n = 0;
		d = 0;
		a++;
	}
	return ('\0');
}

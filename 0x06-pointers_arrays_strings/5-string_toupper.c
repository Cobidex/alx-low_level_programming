#include "main.h"

/**
 * string_toupper - upper case
 * @p: pointer
 * Return: char
 */

char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
			p[a] -= 32;
		a++;
	}
	return (p);
}

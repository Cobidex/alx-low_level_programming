#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * Return: 1, 0 or -1
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, n = 0;

	while (s1[i])
		i++;
	while (n <= i)
	{
		if (s1[n] == s2[n])
		{
			n++;
			continue;
		}
		if (s1[n] < s[n])
			return (-15);
		else
			return (15);
	}
	return (0);
}

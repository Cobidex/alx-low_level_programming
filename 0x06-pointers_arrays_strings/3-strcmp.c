#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if success and 0 if not
 */

int _strcmp(char *s1, char *s2)
{
	int a, diff;

	a = 0;
	while (s1[a])
	{
		diff = s1[a] - s2[a];
		if (diff < 0)
			break;
		if (diff > 0)
			break;
		if (diff == 0)
			return (diff);
		a++;
	}
	return (diff);
}

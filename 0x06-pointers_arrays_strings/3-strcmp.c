#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if success and 0 if not
 */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;
	b = 0;
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	if (a < b)
		return (-15);
	else if (a > b)
		return (15);
	else
		return (0);
}

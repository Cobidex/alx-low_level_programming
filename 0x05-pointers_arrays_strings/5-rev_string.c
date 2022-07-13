#include "main.h"

/**
 *rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	int a, b;

	a = 0;
	for (; *s != '\0'; s++)
		a++;
	char c[a];

	for (b = 0; b <= a; b++)
		c[b] = *(s + (a - b));
	s = c;
}

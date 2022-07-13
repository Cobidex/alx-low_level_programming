#include "main.h"

/**
 *rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	int a, d, b;
	char *c;

	c = s;
	a = 0;
	for (; *s != '\0'; s++)
		a++;
	for (b = 0; b <= a; b++)
		*(c + b) = *(s + (a - b));
	for (d = 0; d < a; d++)
		*(s + d) = *(c + d);
}

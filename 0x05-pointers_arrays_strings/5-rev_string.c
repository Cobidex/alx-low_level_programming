#include <stdlib.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char c;
	char *rev = s;
	int i = 0, j = 0, k;

	while (rev[i])
		i++;
	i--;
	k = i;
	while (j <= (k / 2))
	{
		c = s[j];
		s[j] = rev[i];
		rev[i] = c;
		++j;
		--i;
	}
}

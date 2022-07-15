#include "main.h"

/**
 * reverse_array - reverse array
 * @a: pointer
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *p, b, d, c;

	p = a;
	d = 0;
	for (b = 0; b < n; b++)
		p++;
	for (c = 0; c < b / 2; c++)
	{
		d = a[c];
		a[c] = *p;
		*p = d;
		p--;
	}
}

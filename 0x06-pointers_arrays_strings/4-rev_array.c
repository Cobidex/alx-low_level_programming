#include "main.h"

/**
 * reverse_array - reverse array
 * @a: pointer
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *p, b, d, e;

	p = a;
	for (b = 0; b <= n; b++)
	{
		d = n - b;
		p[b] = *(a + d);
	}
	for (e = 0; e <= n; e++)
		*(a + e) = p[e];
}

#include "main.h"

/**
 * reverse_array - reverse array
 * @a: pointer
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;

	b = 0;
	while (a[b])
	{
		a[b] = *(a + (n - b));
		b++;
	}
}

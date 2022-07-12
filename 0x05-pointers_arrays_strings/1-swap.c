#include "main.h"

/**
 * swap_int - swaps two pointers
 * @*a: pointer to a
 * @a: value of a
 * @*b: pointer to b
 * @b: value of b
 */

void swap_int(int *a, int *b)
{
	int *p;

	*p = *a;
	*a = *b;
	*b = *p;
}

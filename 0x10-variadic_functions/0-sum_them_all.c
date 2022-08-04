#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments
 * @n: number of argu,emts passed
 * @...: list of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, num;
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; ++i)
	{
		num = va_arg(args, int);
		sum += num;
	}
	return (sum);
}

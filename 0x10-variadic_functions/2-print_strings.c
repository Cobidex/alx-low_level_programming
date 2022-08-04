#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by newline
 * @separator: string seperator
 * @n: number of strings
 * @...: arguments to be passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *p;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		p = va_arg(args, char *);
		(!p) ? printf("nil") : printf("%s", p);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

#include "function_pointers.h"

/**
 * print_name - prints name to standard output
 * @name: pointer to name
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

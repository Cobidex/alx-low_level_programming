#include "main.h"

/**
 * _strlen_recursion - returns length
 * @s: string pointer
 * Return: len
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (n);
	}
	s++;
	n++;
	_strlen_recursion(s);
}

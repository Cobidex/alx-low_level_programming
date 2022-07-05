#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to check
 *
 * Return: 1 if success and 0 if not
 */
int _isalpha(int c)
{
	if (c < 123 && c > 9)
		return (1);
	else if (c < 91 && c > 64)
		return (1);
	else
		return (0);

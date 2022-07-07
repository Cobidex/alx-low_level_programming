#include "main.h"

/**
 * _isdigit - checks for number
 * @c: integer
 * Return: set to 1 if success
 */

int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}

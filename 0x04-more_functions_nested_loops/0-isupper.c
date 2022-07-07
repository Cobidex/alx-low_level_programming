#include "main.h"

/**
 * _isupper - checks if upper case
 * @c: character
 * Return: set to zerp
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

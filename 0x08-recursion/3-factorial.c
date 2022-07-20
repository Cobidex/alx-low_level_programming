#include "main.h"

/**
 * factorial - factorial
 * @n: integer
 * Return: -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * (factorial(n - 1)));
}

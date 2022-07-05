#include "main.h"

/**
 * print_sign - print sign
 * @n: the number
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 48)
		return (1);
	if (n < 48)
		return (-1);
	if (n == 48)
		return (0);
}

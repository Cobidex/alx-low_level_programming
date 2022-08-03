#include "3-calc.h"

/**
 * op_add - adds two numbers
 * op_sub - difference between two numbers
 * op_mul - multiplies two numbers
 * op_div - division
 * op_mod - remainder
 * @a: integer
 * @b: integer
 * Return: resdult
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

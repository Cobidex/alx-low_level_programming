#include <stdio.h>

/**
 * main - finds the maximum prime number
 * Description: uses nested while loops
 * Return: 0
 */

int main(void)
{
	long num = 612852475143, div = 2;

	while (num > 1)
	{
		while (num % div == 0)
			num /= div;
		div++;
	}
	printf("%ld\n", div - 1);
	return (0);
}

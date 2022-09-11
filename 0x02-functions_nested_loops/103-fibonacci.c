#include <stdio.h>

/**
 * main - prints fibonnacci numbers
 * Description: Finds the even fibonacci numbers
 * Return: 0 if success
 */

int main(void)
{
	unsigned int a = 1, b = 2, c, sum_even = 0;

	while (b < 4000000)
	{
		c = b;
		b += a;
		a = c;
		if (!(b % 2))
		{
			sum_even += b;
			printf("%u, ", sum_even);
		}
	}
	putchar('\n');
	return (0);
}

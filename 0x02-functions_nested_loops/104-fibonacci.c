#include <stdio.h>

/**
 * main - prints fibonnacci numbers
 * Description: Finds the first 98 fibonacci numbers
 * Return: 0 if success
 */

int main(void)
{
	unsigned long a = 1, b = 1, c, count = 1;

	while (count < 98)
	{
		c = b;
		b += a;
		a = c;
		printf("%lu, ", a);
		++count;
	}
	printf("%lu\n", b);
	return (0);
}

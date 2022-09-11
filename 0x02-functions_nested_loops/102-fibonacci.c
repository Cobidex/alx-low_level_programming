#include <stdio.h>

/**
 * main - prints fibonnacci numbers
 * Description: Finds the first 50 fibonacci numbers
 * Return: 0 if success
 */

int main(void)
{
	long unsigned int a = 1, b = 1, c, count = 1;

	while (count < 50)
	{
		c = b;
		b += a;
		a = c;
		printf("%u, ", a);
		++count;
	}
	printf("%u\n", b);
	return (0);
}

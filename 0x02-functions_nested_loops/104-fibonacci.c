#include <stdio.h>

/**
 * main - prints fibonnacci numbers
 * Description: Finds the first 98 fibonacci numbers
 * Return: 0 if success
 */

int main(void)
{
	double long a = 1, b = 1, c, count = 1;

	while (count < 98)
	{
		c = b;
		b += a;
		a = c;
		printf("%.lf, ", a);
		++count;
	}
	printf("%.lf\n", b);
	return (0);
}

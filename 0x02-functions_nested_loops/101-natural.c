#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Description: print multiples of 3 and 5
 * below 1024
 *
 * Return: set to 0 if successful
 */
int main(void)
{
	int a, b, c;
	int multiples_of_3, multiples_of_5;
	int total_sum_of_3, total_sum_of_5;
	int Grand_sum, c_max;

	a = 3;
	b = 5;
	c_max = 342;
	c = 1;
	for (c = 1; c < c_max; c++)
	{
		multiples_of_3 = a * c;
		multiples_of_5 = b * c;
		total_sum_of_3 = multiples_of_3 + a * c;
		total_sum_of_5 = multiples_of_5 + b * c;
		Grand_sum = total_sum_of_3 + total_sum_of_5;
	}
	printf("%d\n", Grand_sum);
	return (0);
}

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
	int a, b, max, sum;

	a = 3;
	b = 5;
	for (max = 0; max < 1024; max++)
	{
		if (max % a == 0 || max % b == 0)
			sum = sum + max;
	}
	printf("%d\n", sum);
	return (0);
}

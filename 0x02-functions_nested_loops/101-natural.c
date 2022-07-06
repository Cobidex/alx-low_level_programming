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
	int num, sum;

	sum = 0;
	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}

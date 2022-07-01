#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print last digit of number
 *
 * Description: take a random number n and output the last digit
 * represented as la
 *
 * Return: set to 0
 */

int main(void)
{
	int n, la;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	la = n % 10;
	if (la > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, la);
	}
	else if (la == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (la < 6 && la != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, la);
	}
	return (0);
}

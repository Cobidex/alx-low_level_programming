#include <stdio.h>

/**
 * main - start
 * Description: print fizz and buzz
 * Return: set to 0 if successful
 */

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) != 0)
			printf("Fizz ");
		else if ((num % 5) == 0 && (num % 3) != 0)
			printf("Buzz ");
		else if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", num);
	}
	printf("Buzz\n");
	return (0);
}

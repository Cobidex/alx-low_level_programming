#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Description: finds and prints the largest of the prime factor
 * Return: 0 if succesful
 */

int main(void)
{
	unsigned long num = 612852475143, prime = 3, highest_prime, a;
	unsigned long remainder;

	while (prime < (num / 2))
	{
		if (!(num % prime))
		{
			remainder = 1;
			for (a = 2; a < prime; a++)
			{
				if (!(prime % a))
				{
					remainder = 0;
					break;
				}
			}
			if (remainder)
				highest_prime = prime;
		}
		++prime;
	}
	printf("%lu\n", highest_prime);
	return (0);
}

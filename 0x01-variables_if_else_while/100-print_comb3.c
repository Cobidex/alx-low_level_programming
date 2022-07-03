#include <stdio.h>

/**
 * main - output all possible combinations
 *
 * Description: remove all similar combinations using if statements
 * and while statements
 *
 * Return: set to 0 if successful
 */
int main(void)
{
	int a, b;

	a = 48;
	b = 49;
	while (a < 58)
	{
		while (b < 58)
		{
			putchar(a);
			putchar(b);
			if (a < 58 || b < 58)
			{
				putchar(44);
				putchar(32);
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}

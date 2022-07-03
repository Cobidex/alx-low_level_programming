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
		while (a < 58 && b < 58)
		{
			if (a == 49 && b == 48)
				b++;
			if (a == 50 && b == 48)
				b = b + 2;
			if (a == 51 && b == 48)
				b = b + 3;
			if (a == 52 && b == 48)
				b = b + 4;
			if (a == 53 && b == 48)
				b = b + 5;
			if (a == 54 && b == 48)
				b = b + 6;
			if (a == 55 && b == 48)
				b = b + 7;
			if (a == 56 && b == 48)
				b = b + 8;
			b++;
		}
		putchar(a);
		putchar(b);
		putchar(44);
		putchar(32);
		a++;
	}
	putchar(10);
	return (0);
}

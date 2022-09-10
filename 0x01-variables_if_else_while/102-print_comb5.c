#include <stdio.h>

/**
 * main - print out 4 digits
 *
 * Description: output using nested loops
 *
 * Return: set to 0 if successful
 */

int main(void)
{
	int a, b, c, d, in_track, out_track = 1, count = 1;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			in_track = 1;
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (out_track < in_track)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
					}
					if (out_track < in_track && count < 9899)
					{
						putchar(',');
						putchar(' ');
					}
					++count;
					++in_track;
				}
			}
			++out_track;
		}
	}
	putchar('\n');
	return (0);
}

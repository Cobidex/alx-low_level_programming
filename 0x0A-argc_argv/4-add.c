#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - sums positive numbers
 * @argc: argument count
 * @argv: array vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int a, sum = 0;
	char *d;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			d = argv[i];
			for (a = 0; a < strlen(d); a++)
			{
				if (d[a] < 48 || d[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(d);
			d++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

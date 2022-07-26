#include <stdlib.h>
#include<stdio.h>
#include "main.h"

/**
 * main - prints change
 * @argc: count
 * @argv: vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int change[5] = {25, 10, 5, 2, 1};
	int a;
	int cents = 0;
	int num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
	}
	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (change[a] <= num)
		{
			num -= change[a];
			cents++;
			if (num == 0)
			{
				printf("%d\n", cents);
			}
		}
	}
	return (0);
}

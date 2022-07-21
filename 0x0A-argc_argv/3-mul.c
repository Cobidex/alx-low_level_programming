#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int product = n1 * n2;

	if (argc == 3)
	{
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}

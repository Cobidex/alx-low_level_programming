#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

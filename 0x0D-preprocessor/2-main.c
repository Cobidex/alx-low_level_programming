#include "main.h"

/**
 * main - prints name of file
 * Return: 0
 */

int main(void)
{
	char *p = __FILE__;

	for (p = 0; *p != '\0'; p++)
	{
		_putchar(*p);
		_putchar('\n');
	}
	return (0);
}

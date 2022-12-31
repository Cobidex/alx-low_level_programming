#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate and print a random valid password
 * for the program 101-crackme
 * Return: Always 0 (Success)
*/
int main(void)
{
	srand(time(NULL));

	printf("%c%c%c%c%c%c%c\n",
	rand() % 26 + 'a',
	rand() % 26 + 'A',
	rand() % 10 + '0',
	rand() % 26 + 'a',
	rand() % 26 + 'A',
	rand() % 10 + '0',
	rand() % 26 + 'a');

	return (0);
}

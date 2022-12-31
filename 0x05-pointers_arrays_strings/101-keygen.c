#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**

main - Generate and print a random valid password for the program 101-crackme

Return: Always 0 (Success)
*/
int main(void)
{
	// Seed the random number generator with the current time
	srand(time(NULL));

	// Generate and print a random password
	printf("%c%c%c%c%c%c%c\n",
	rand() % 26 + 'a', // Random lowercase letter
	rand() % 26 + 'A', // Random uppercase letter
	rand() % 10 + '0', // Random digit
	rand() % 26 + 'a', // Random lowercase letter
	rand() % 26 + 'A', // Random uppercase letter
	rand() % 10 + '0', // Random digit
	rand() % 26 + 'a'); // Random lowercase letter

	return 0;
}

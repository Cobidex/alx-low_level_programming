#include <stdio.h>
#include <unistd.h>

/**
 * main - print error
 *
 * Description: Print to standard error
 *
 * Return: return 1
 */
int main(void)
{
	fprintf(stderr, "and that piece of art is useful\"");
	fprintf(stderr, " - Dora Korpar, 2015-10-19");
	return (1);
}

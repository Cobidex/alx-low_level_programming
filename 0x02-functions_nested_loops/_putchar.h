#include <unistd.h>

/**
 * _putchar - outputs characters
 * @a: the character to print
 *
 * Return: on success 1
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}

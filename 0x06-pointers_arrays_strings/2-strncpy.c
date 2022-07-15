#include "main.h"

/**
 * _strncpy - copies string
 * @dest: first pointer
 * @src: second pointer
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	char *temp;

	a = 0;
	temp = src;
	while (a <= n)
	{
		temp[a] = src[a];
		a++;
	}
	dest = temp;
	return (dest);
}

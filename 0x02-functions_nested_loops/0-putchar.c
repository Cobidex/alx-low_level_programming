#include "main.h"

/**
 * main - output a string
 *
 * Description: use printf function to output string
 *
 * Return: set to 0 if success
 */
int main(void)
{
	char func[] = "_putchar";
	int a = 0;

	for (a = 0; a < 8; a++)
	{
		_putchar(func[a]);
	}
	_putchar('\n');
	return (0);
}

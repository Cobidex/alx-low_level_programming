/* declaration of prototype */
int _putchar(char a);

/**
 * _putchar - outputs single char
 * @a: the character to output
 *
 * Return: 1 if success
 */
int _putchar(char a)
{
	return (write(1, &c, 1));
}

/* prototype of print_alphabet function */
void print_alphabet(void);

/**
 * print_alphabet - print lower case alphabets
 *
 * Return: 0 if successful
 */
int print_alphabet()
{
	int a;

	a = 97;
	for (a = 97; a < 123; a++)
		_putchar(a);
	_putchar(10);
	return (0);
}



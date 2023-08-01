#include "main.h"

/**
 * print_value - prints the value
 * @value: to be printed
 *
 * Return: void
 */
void print_value(int value)
{
	if (value / 10)
	{
		_putchar(value / 10 + '0');
		_putchar(value % 10 + '0');
	}
	else
	{
		_putchar(value + '0');
	}
}


/**
 * print_row - print the rows of the table
 *
 * @column: the current column to print
 *
 * Return: void
 */
void print_row(int column)
{
	int index, value;

	for (index = 0; index < 10; index++)
	{
		value = column * index;
		if (index != 0 && !(value / 10))
		{
			_putchar(' ');
		}
		print_value(value);
		if (index < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

/**
 * times_table - prints n times table
 * Return: void
 */

void times_table(void)
{
	int column;

	for (column = 0; column < 10; column++)
	{
		print_row(column);
	}
}

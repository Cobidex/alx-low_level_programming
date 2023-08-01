#include "main.h"

/**
 * print_value - prints the value
 * @value: to be printed
 * @index: current index of value
 *
 * Return: void
 */
void print_value(int value, int index)
{
	if (value / 100)
	{
		_putchar(value / 100 + '0');
		_putchar((value / 10) % 10 + '0');
		_putchar(value % 10 + '0');
	}
	else if (value / 10)
	{
		if (index)
		{
			_putchar(' ');
		}
		_putchar(value / 10 + '0');
		_putchar(value % 10 + '0');
	}
	else
	{
		if (index)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(value + '0');
	}
}


/**
 * print_row - print the rows of the table
 *
 * @column: the current column to print
 * @columns: total number of columns
 *
 * Return: void
 */
void print_row(int column, int columns)
{
	int index, value;

	for (index = 0; index <= columns; index++)
	{
		value = column * index;
		print_value(value, index);
		if (index < columns)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

/**
 * print_times_table - prints n times table
 * @n: total number of columns
 * Return: void
 */

void print_times_table(int n)
{
	int row_num;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (row_num = 0; row_num <= n; row_num++)
	{
		print_row(row_num, n);
	}
}

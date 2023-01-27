#include <stdio.h>

/**
 * linear_search - returns first index of value
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t indicator = -1, i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			if (value == array[i])
			{
				indicator = i;
				return (indicator);
			}
		}
	}
	return (indicator);
}

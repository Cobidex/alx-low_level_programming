#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - returns first index of value
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t indicator = -1, i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			if (value == array[i])
			{
				indicator = i;
				return (indicator);
			}
		}
	}
	return (indicator);
}

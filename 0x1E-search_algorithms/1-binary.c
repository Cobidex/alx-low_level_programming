#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array of integers to be searched
 * @size: size of the array
 * @value: value tp be searched for
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t indicator = -1, i_half, a_half, i;

	i_half = (size - 1) / 2;
	a_half = size / 2;
	if (a_half == 0)
		if (value != array[0])
			return (indicator);
	if (array)
	{
		printf("Searching in array: ");
		for (i = 0; i < size - 1; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		if (value < array[i_half])
			indicator = binary_search(array, a_half, value);
		else if (value > array[i_half])
		{
			array += i_half;
			indicator = binary_search(array, a_half, value);
		}
		else
		{
			indicator = i_half;
			return (indicator);
		}
	}
	return (indicator);
}

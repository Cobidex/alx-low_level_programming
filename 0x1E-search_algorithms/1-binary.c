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
	if (array)
		return (_search(array, 0, size - 1, value));
	return (-1);
}

/**
 * _search - searches for value
 * @array: int ordered array
 * @left: the left-most index of the array
 * @right: the right-most index of array
 * @value: int searched for
 * Return: -1 or index
 */
int _search(int *array, int left, int right, int value)
{
	int mid, i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);
	mid = (right + left) / 2;
	if (right - left == 0)
	{
		if (array[mid] != value)
			return (-1);
	}

	if (array[mid] < value)
	{
		left = mid + 1;
		return (_search(array, left, right, value));
	}
	else if (array[mid] > value)
	{
		right = mid - 1;
		return (_search(array, left, right, value));
	}
	else
		return (mid);
}

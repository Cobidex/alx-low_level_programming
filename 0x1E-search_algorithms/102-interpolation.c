#include <stdio.h>
#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: array of integers to be searched
 * @size: size of the array
 * @value: value tp be searched for
 * Return: index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array)
		return (inter_search(array, size, 0, size - 1, value));
	return (-1);
}

/**
 * inter_search - searches for value
 * @array: int ordered array
 * @size: array size
 * @left: the left-most index of the array
 * @right: the right-most index of array
 * @value: int searched for
 * Return: -1 or index
 */
int inter_search(int *array, size_t size, int left, int right, int value)
{
	size_t mid;
	size_t pos = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));

	mid = (right + left) / 2;
	if (mid >= size)
	{
		printf("Value checked array[%li] is out of range\n", mid);
		return (-1);
	}
	if (right - left == 0)
	{
		if (array[mid] != value)
			return (-1);
	}
	printf("Value checked array[%li] = [%i]\n", mid, array[mid]);
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
	{
		left = pos;
		return (inter_search(array, size, left, right, value));
	}
	if (array[mid] > value)
	{
		right = pos;
		return (inter_search(array, size, left, right, value));
	}
	return (-1);
}

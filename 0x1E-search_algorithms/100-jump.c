#include "search_algos.h"

/**
 * jump_search -  searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: sorted in ascending order
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 or first index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size);

	if (array)
	{
		while (i < size)
		{
			if (array[i] >= value)
			{
				printf("Value found between indexes [%li] and [%li]\n", (i - jump), i);
				for (i -= jump; i <= i + jump; i++)
				{
					printf("Value checked array[%li] = [%i]\n", i, array[i]);
					if (array[i] == value)
						return (i);
				}
			}
			else
				printf("Value checked array[%li] = [%i]\n", i, array[i]);
			i += jump;
		}
		i -= jump;
		printf("Value found between indexes [%li] and [%li]\n", i, (i + jump));
		for (; i < size; i++)
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}

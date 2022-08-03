#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to base element
 * @size: number of array elements
 * @cmp: pointer to function to compare values
 * Return: index||0||-1||-1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (index < size)
			{
				if (cmp(array[index]))
					return (index);
				index++;
			}
		}
	}
	return (-1);
}

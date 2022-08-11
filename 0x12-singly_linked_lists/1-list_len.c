#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - number of elements
 * @h: pointer to list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

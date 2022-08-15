#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* listint_len - prints elements in list
* @h: head pointer
* Return: number of nodes or 0
*/

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

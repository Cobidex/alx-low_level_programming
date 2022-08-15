#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - prints elements in list
* @h: head pointer
* Return: number of nodes or 0
*/

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

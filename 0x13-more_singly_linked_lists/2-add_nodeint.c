#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds node at beginning
 * @head: address of head pointer
 * @n: number to initialize node data with
 * Return: NULL or address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (*head == NULL)
		return (NULL);
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	return (NULL);

	if (temp != NULL)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return (*head);
	}
	return (NULL);
}

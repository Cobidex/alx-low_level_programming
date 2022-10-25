#include "main.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_s *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		new_table = NULL;
		return (NULL);
	}
	while (i < size)
		new_table->array[i++] = NULL;
	new_table->size = size;
	return (new_table);
}

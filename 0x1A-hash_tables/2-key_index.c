#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to find its index
 * @size: size of the array of hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);
	return (i % size);
}

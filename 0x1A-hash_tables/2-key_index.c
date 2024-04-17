#include "hash_tables.h"

/**
 * key_index -the function gest the  index for a given  key
 * @key: string to hash
 * @size: size of the  hash table
 *
 * Return: index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

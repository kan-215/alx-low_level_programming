#include "hash_tables.h"
/**
 * hash_table_get - retrieves the  value associeted with key
 * @ht: pointer to the  hash table
 * @key: key to retrive value
 *
 * Return: value, else return NULL if key does not exist.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}

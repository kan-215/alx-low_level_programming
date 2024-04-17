#include "hash_tables.h"

/**
 * hash_table_delete - the function frees hash table and all nodes
 * @ht: pointer to the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *aux_free;
	unsigned long int a = 0;

	if (!ht)
		return;

	for (a = 0; a < ht->size; a++)
	{
		bucket = ht->array[a];
		while (bucket)
		{
			aux_free = bucket;
			bucket = bucket->next;
			if (aux_free->key)
				free(aux_free->key);
			if (aux_free->value)
				free(aux_free->value);
			free(aux_free);
		}
	}
	free(ht->array);
	free(ht);
}

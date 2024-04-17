#include "hash_tables.h"

/**
 * hash_table_print - the function prints the value from hashtable
 * @ht: pointer to hashtable
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a = 0;
	hash_node_t  *bucket;
	int not_fin = 0;

	if (!ht)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		bucket = ht->array[a];
		while (bucket)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			not_fin = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}

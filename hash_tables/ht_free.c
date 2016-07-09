#include "header.h"

/* 
 * 	This function frees the allocated memory of a hash table.
 * 	@hastable	:= the hash table to be freed.
 */
void ht_free(HashTable *hashtable)
{
	List * bucket, * tmp;
	unsigned int size, i;
	size = hashtable->size;
	for(i = 0; i < size; i++) {
		bucket = hashtable->array[i];
		while(bucket != NULL) {
			free(bucket->value);
			free(bucket->key);
			tmp = bucket;
			free(bucket);
			bucket = tmp->next;
		}
	}
	free(hashtable-array);
	free(hashtable);
}

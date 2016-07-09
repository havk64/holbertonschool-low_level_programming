#include "header.h"

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

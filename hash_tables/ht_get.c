#include "header.h"

/* 
 * 	This function gets the key-value pair from a hash table.
 * 	@hashtable	:= the hash table.
 * 	@key		:= the key from where we will retrive the value.
 */
char *ht_get(HashTable *hashtable, const char *key)
{
	unsigned int index;
	List * bucket;

	if(key == NULL) return NULL;

	index = hash(key, hashtable->size);
	bucket = hashtable->array[index];
	while(bucket != NULL) {
		if(compare(key, bucket->key)) {
			return bucket->value;
		}
		bucket = bucket->next;
	}
	return NULL;
}

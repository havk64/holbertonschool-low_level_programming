#include "header.h"

/* 
 * 	This function add an element to a hash table.
 * 	@hashtable	:= the hash table to be filled.
 * 	@key		:= the key of the key-value pair.
 * 	@value		:= the value of the key-value pair. 
 */
int ht_put(HashTable *hashtable, const char *key, const char *value)
{
	unsigned int index;
	List * list;
	if(key == NULL) return 1;

	index = hash(key, hashtable->size);
	list = hashtable->array[index];
	while(list != NULL) {
		if(compare(list->key, key) == 0) {
			free(list->value);
			list->value = strdup(value);
			return 0;
		}
		list = list->next;
	}

	list = malloc(sizeof(List));
	if(list == NULL) return 1;
	
	list->key = strdup(key);
	list->value = strdup(value);
	list->next = hashtable->array[index];

	hashtable->array[index] = list;
	return 0;
}

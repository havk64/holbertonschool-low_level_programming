#include "header.h"

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

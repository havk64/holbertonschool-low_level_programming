#include "header.h"


HashTable *ht_create(unsigned int size)
{
	unsigned int i;
	HashTable * ht;
	List ** array;
	
	if(size < 1) return NULL;
	
	ht = malloc(sizeof(HashTable));
	if(ht == NULL) return NULL;
	
	array = malloc(sizeof(List) * size);
	if(array == NULL) return NULL;
	
	for(i = 0; i < size; i++) array[i] = NULL;

	ht->size = size;
	ht->array = array;

	return ht;
}



#include "header.h"


HashTable *ht_create(unsigned int size)
{
	HashTable * ht;
	List ** array;
	
	ht = malloc(sizeof(HashTable));
	if(ht == NULL) return 1;
	
	array = malloc(sizeof(List) * size);
	if(array == NULL) return 1;
	
	ht->size = size;
	ht->array = array;

	return ht;
}



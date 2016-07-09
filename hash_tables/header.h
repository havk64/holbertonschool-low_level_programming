#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "hashtable.h"

int print_char(char);
HashTable *ht_create(unsigned int size);
unsigned int hash(const char *key, unsigned int size);
int ht_put(HashTable *hashtable, const char *key, const char *value);
int compare(const char * a, const char * b);
char *ht_get(HashTable *hashtable, const char *key);

#include <stdlib.h>
#include "str_struct.h"

int len(char *s) {
    int i = 0 ;
    while(*(s + i)) {
	i++;
    }
    return i;
}
    

struct String *string_to_struct(char *str)
{
    int i;
    char *m;
    struct String s;
    struct String *p;
    p = &s;
    m = malloc(len(str) * (sizeof(char) + 1));
    if(m != NULL) {
	for(i = 0; i < len(str); i++) {
	    m[i] = str[i];
	}
	m[i] = 0;
	p->length = len(str);
	p->str = m;
	return p;
    }
    return NULL;
}

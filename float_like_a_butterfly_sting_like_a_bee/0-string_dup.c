#include <stdlib.h>

char *string_dup(char *str)
{
    int i = 0;
    char *s;
    while(*(str + i++));
    
    s = malloc(sizeof(str) * i);
    if(s != NULL) {
	while(i--){
	    s[i] = str[i];
	}
	return s;
    }
    return NULL;
}

#include <stdlib.h>
#include "str_struct.h"

/*
 * Function to find the lenght of a string.
 */
int len(char *s) {
    int i = 0 ;
    while(*(s + i)) {
	i++;
    }
    return i;
}
    
/*
 * This function stores a string and its length in a newly allocated
 * structure,  and return its address.
 */
struct String *string_to_struct(char *str)
{
    int i;
    char *m;
    struct String s; /* Initializing the variable */
    struct String *p;
    p = &s;	     /* Asigns the addres of the variable to the pointer.*/
    m = malloc(len(str) * (sizeof(char) + 1)); /* Allocating resources   */
    if(m != NULL) {
	for(i = 0; i < len(str); i++) {
	    m[i] = str[i]; /* Copying the string to str property.	 */ 
	}
	m[i] = 0;	   /* The string needs to be NULL terminated. 	 */
	p->length = len(str); /* Asigning the lenght and string to objc. */
	p->str = m;
	return p;
    }
    return NULL;
}

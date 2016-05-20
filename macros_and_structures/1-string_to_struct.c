#include <stdlib.h>
#include "str_struct.h"

/* ==================================================================== *
 * This function stores a string and its length in a newly allocated	*
 * structure,  and return its address.					*
 * ==================================================================== */
struct String *string_to_struct(char *str)
{
    int i, len;
    char *s;
    struct String *p;		       /* Creating pointer to struct.	*/

    p = malloc(sizeof(struct String)); /* Allocating memory to pointer	*/
    
    len = 0;
    while(str[len]) /* Finding the length of the string(Array syntax).	*/
	len++;
    
    s = malloc(len * (sizeof(char) + 1)); /* Allocating resources	*/
    if(s != NULL) {

	for(i = 0; i < len; i++) 
	    s[i] = str[i]; /* Copying the string to str property.	*/ 
	s[i] = 0;	   /* The string needs to be NULL terminated.	*/

	if(p != NULL) {
	    p->str = s;	
	    p->length = len; /*Assigning the lenght and string to objc.	*/
	}
	return p;
    }
    return NULL;
}

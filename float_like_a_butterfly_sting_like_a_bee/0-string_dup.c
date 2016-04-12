#include <stdlib.h>

/* ==================================================== *
 *  This function returns returns a pointer to a newly  *
 *  allocated space in memory, which contains a copy of *
 *  the string given as a paramete                      *
 *  by Alexandro de Oliveira, for Holberton School.     *
 * ==================================================== */
char *string_dup(char *str)
{
    int i = 0;
    char *s;
    while(*(str + i++)); /* Counting the length of the string */
    
    s = malloc(sizeof(str) * i);
    if(s != NULL) {
	while(i--){
    s[i] = str[i]; /*Copying the string to reserved space */
	}
	return s;
    }
    return NULL;
}

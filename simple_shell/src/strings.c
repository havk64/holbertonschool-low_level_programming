#include "shell.h"

/*
 *      This function concatenate two strings allocating
 *      enough space and returns its pointer.
 *	(Modifyed version to add the '/' in between)
 */
char *string_concat(char *s1, char *s2)
{
    int i = 0;
    char *s;
    int sum = len(s1) + len(s2) + 1;

    s = malloc(sizeof(char) * (sum + 1 ));
    if(s != NULL) {
        while(i < len(s1)) {
            s[i] = s1[i];
            i++;
        }
        s[i] = '/';
	while(++i < sum ) 
            s[i] = s2[i - len(s1) - 1];
	
        s[i] = 0;
        return s;
    }
    return NULL;
}

/*
 *  Implementation of strncmp() 
 */
int strncomp(char *s1, const char *s2, int n)
{
    while( n != 0) {
	if(*s1 != *s2)
	    return ((*(const unsigned char *)s1 < *(const unsigned char *)s2) ? -1 : +1);
        else if(*s1 == 0) 
            return (0);
        
        s1++; s2++; n--;
    }
    return (0);
}

/*
 *  Implementation of strcmp()
 */
int strcomp(char *s1, const char *s2)
{
    while(*s1 == *s2) {
        if(*s1 == 0) 
            return 0;

        s1++; s2++;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

/*
 *  Find the length of a string.
 */
int len(char *s)
{
    int i = 0;

    while(s[i])
	i++;

    return i;
}

/*
 * Implementation of strcpy.
 */
char *string_copy(char *dest, const char *src)
{
    char *s;
    s = dest;
    while((*dest++ = *src++)) ; /* Empty while body */

    return s;
}

/*
 * Implementation of strncpy.
 */
char *string_ncopy(char *dest, const char *src, int n)
{
    char *s;
    s = dest;
    while(n && (*dest++ = *src++) ) /* while n and second   */
        n--;                        /* expression are != 0  */
    while(n--)
        *dest++ = 0;
    return s;
}

/* 
 * Implementation of strncat().  Used to concatenate two strings.*
 */
char *nconcat_strings(char *dest, const char *src, int n)
{
    char *s;
    s = dest;

    while( *dest )
        dest++;
    while( *src && n-- )
        *dest++ = *src++;
    *dest = 0;
    return s;
}

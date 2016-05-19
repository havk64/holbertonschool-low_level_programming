#include "shell.h"

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

#include "shell.h"

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

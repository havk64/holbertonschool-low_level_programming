#include "shell.h"

/*
 *  Implementation of strncmp() 
 */
int strncomp(char *s1, const char *s2, int n)
{
    while(*s1 == *s2 && n != 0) {
        if(*s1 == 0) {
            return 0;
        }
        s1++; s2++; n--;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
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
 * Implementation of read_line()
 *
char *read_line(void)
{
    char *buff; 
    int i = 0;
    int c;

    if((buff =  malloc(sizeof(char) * BUF_SIZE + 1))) {
	perror("Allocation failed!");
	return 1;
    }

    c = getchar();

    if(c == EOF || c == '\n') {
	buff[i] = 0;
	return buff;
    } else 
	buff[i] = c;
    
    i++;
}
*/

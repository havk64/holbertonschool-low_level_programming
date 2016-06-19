#include "cross.h"

/* 
 * Returns the length of a string
 */
int len(char * s)
{
	int i;
	for(i = 0; s[i] != 0; i++);
	return i;
}
/* 
 * Converts a string representing numbers in integers.
 */
int atoi(char * s)
{
	int i, n;
	i = n = 0;
	while(s[i] != '\0') {
		n *= 10;
		n += s[i] - '0';
		i++;
	}
	return n;
}
/* 
 * Checks if a string correspond to numbers.
 */
int isNum(char *str) 
{
	while(*str != '\0' && str != NULL) {
		if(*str < '0' || *str > '9')
			return (1);
		str++;
	}	
	return (0);
}

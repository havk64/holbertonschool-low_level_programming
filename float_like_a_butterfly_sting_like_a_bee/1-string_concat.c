#include <stdlib.h>

int len(char *s)
{
    int i = 0;
    while(*(s + i)) {
	i++;
    }
    return i;
}

char *string_concat(char *s1, char *s2)
{
    int i = 0;
    char *s;
    int sum = len(s1) + len(s2);
    s = malloc(sizeof(char) * (sum));
    if(s != NULL) {
	while(i < len(s1)) {
	    s[i] = s1[i];
	    i++;
	}
	while(i < sum) {
	    s[i] = s2[i - len(s1)];
	    i++;
	}
	s[i] = 0;
	return s;
    }
    return NULL;
}
		  

#include <stdlib.h>

int len(char *s)
{
    int i = 0;
    while(*(s + i)) {
	i++;
    }
    return i;
}

char *string_nconcat(char *s1, char __attribute__((unused)) *s2, int n)
{
    char *s;
    int i = 0;
    int sum = len(s1) + n ;
    s = malloc(sizeof(char) * (sum + 1));
    if(s != 0) {
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

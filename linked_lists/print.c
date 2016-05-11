#include "list.h"

void print(char s[])
{
    int i = 0;
    while(s[i])
	i++;

    write(1, s, i);
}

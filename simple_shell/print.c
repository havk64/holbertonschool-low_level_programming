#include "shell.h"

int len(char *s)
{
    int i = 0;

    while(s[i])
	i++;

    return i;
}

void print(char *s)
{
    write(1, s, len(s));
}

void prompt(void)
{
    print("simple shell$ ");
}

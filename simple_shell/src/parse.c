#include "shell.h"

int parseIt(char * env[])
{
    int l;
    char *p, *p1;
    char ** path;
    
    p = getEnv("PATH", env);
    l = len(p);
    
    p1 = malloc(sizeof(char) * l + 1);
    if(p1 == NULL) return 1;
    strcpy(p1, p);
    path = string_split(p2, ':');
    
    freeMem(path);
    free(path);
    free(p1);

    return (0);
}

/* 
 * Function getEnv returns a pointer to the value of a env variable.
 */
char *getEnv(char * name, char ** env)
{
    int i, l;
    l = len(name);

    for(i = 0; env[i]; i++)
        if(strncomp(name, env[i], l) == 0)
            return (env[i] + l + 1);

    return NULL;
}

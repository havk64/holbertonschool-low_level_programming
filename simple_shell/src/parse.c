#include "shell.h"

char *getPath(char ** env)
{
    int i, l;
    char * path;
    path = "PATH";
    l = len(path);

    for(i = 0; env[i]; i++)
        if(strncomp(path, env[i], l) == 0)
            return (env[i] + l + 1);

    return NULL;
}

char *getEnv(char * name, char ** env)
{
    int i, l;
    l = len(name);

    for(i = 0; env[i]; i++)
        if(strncomp(name, env[i], l) == 0)
            return (env[i] + l + 1);

    return NULL;
}

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
    string_copy(p1, p);
    path = string_split(p1, ':');
    
    free(p1);
    freeMem(path);
    free(path);

    return (0);
}

char *commandExist(char * cmd, char ** env)
{
    int i;
    char * path, *command;
    char ** paths;
    struct stat st;

    if((command = malloc(sizeof(char) * 32 )) == NULL)
	return NULL;

    path = getEnv("PATH", env);
    paths = string_split(path, ':');

    for( i = 0; paths[i] != 0; i++) {
        string_ncopy(command, paths[i], (len(paths[i]) + 1));
        nconcat_strings(command, "/", 2);
        nconcat_strings(command, cmd, len(cmd) + 1);
        printf("Inside for: %s\n", command);
        if(stat(command, &st) == 0) {
	    freeMem(paths);
	    free(paths);
            return command;
	}        
    }
    freeMem(paths);
    free(paths);
    return command;
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

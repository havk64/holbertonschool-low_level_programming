#include "shell.h"

/*
 * commandExist searchs in the PATH for each command(argv[0])
 * typed in the command line and returns it, if available.
 */
char *commandExist(char * cmd, char ** env)
{
    int i;
    char * path, *command;
    char ** paths;
    struct stat st;

    if((command = malloc(sizeof(char) * BUF )) == NULL)
	return NULL;

    path = getEnv("PATH", env);
    paths = string_split(path, ':');

    for( i = 0; paths[i] != 0; i++) {
        string_ncopy(command, paths[i], (len(paths[i]) + 1));
        nconcat_strings(command, "/", 2);
        nconcat_strings(command, cmd, len(cmd) + 1);

        if(stat(command, &st) == 0) {
	    freeMem(paths);
            return command;
	}        
    }
    freeMem(paths);
    return command;
}

/* 
 * Function getEnv returns a pointer to the value of a env variable.
 * it's similar to the function getenv().
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

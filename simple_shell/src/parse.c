#include "shell.h"

/*
 * commandExist searchs in the PATH for each command(argv[0])
 * typed in the command line and returns it, if available.
 */
char *commandExist(char * cmd, char ** env)
{
    int i, l;
    char * path;
    char * command;
    char ** sPath;

    path = getEnv("PATH", env);
    sPath = string_split(path, ':');

    for( l = 0; sPath[l] != 0; l++);
    for(i = 0; i < l; i++) {
        command = string_concat(sPath[i], cmd);

	if(access(command, X_OK) != -1) {
            freeMem(sPath);
            return command;
	} else {
            if( i < (l - 1) )
		free(command);
	}
    }
    freeMem(sPath);
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

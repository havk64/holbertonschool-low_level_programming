#include "shell.h"

/*
 *Defining available  builtin commands.
 */



/*
 * Show the welcome/help message.
 */
int help(char __attribute__((unused)) *argv[])
{
    if(welcome() == 1)
	perror("Can't load welcome message!\n");
    return (1);
}
/*
 * Defining cd builtin command.
 */
int cd(char *argv[])
{
    if (argv[1] == NULL) 
	perror("Enter at least one argument\n");
    else 
	if (chdir(argv[1]) != 0) 
	    perror("Wrong Usage!");
	
    return 1;
}

/*
 * Function to exit.
 */
int out(char __attribute((unused)) *a[])
{
    return 0;
}

/*
 * Check each command before call the child process.
 */
int checkIt(char * argv[], char  * ep[])
{
    int i;
    char * builtins[] = { "help", "cd", "exit", NULL };
    int (* functions[]) (char **) = { &help, &cd, &out, NULL };


    if(argv[0] == NULL) 
	return (1);

    for(i = 0; i < 3; i++) 
	if(strcomp(argv[0], builtins[i]) == 0) 
	    return (*functions[i])(argv);
    
    return runIt(argv[0], argv, ep);
}

/*
 * Calling child process to execution.
 */
int runIt(char * command, char * argv[], char * ep[])
{
    pid_t pid;
    int status;
    char * cmd;

    cmd = commandExist(command, ep);

    pid = fork();
    if(pid < 0) perror("Ops...!");
	
    if(pid == 0) {

	execve(command, argv, ep);
		
	if(execve(cmd, argv, ep) == -1)
	    perror("Command not found...");

	exit(EXIT_FAILURE);
	return (1);
    }
    else {
	wait(&status);
	free(cmd);
    }
    return (1);
}

/*
 * freeMem is used to free a vector(array) of strings.
 */
void freeMem(char ** a)
{
    int i;
    for(i = 0; a[i]; i++)
	free(a[i]);

    free(a);
}

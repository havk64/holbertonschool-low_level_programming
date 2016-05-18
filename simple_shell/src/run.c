#include "shell.h"

/*
 *Defining available binaries and builtin commands.
 */
char * commands[] = { "ls", "pwd", "emacs", "pstree", "cat", "echo", "env", NULL };
char * replace[] = { "/bin/ls","/bin/pwd", "/usr/bin/emacs", "/usr/bin/pstree", "/bin/cat", "/bin/echo", "/usr/bin/env", NULL };
char * builtins[] = { "help", "cd", "exit", NULL };
int (* functions[]) (char **) = { &help, &cd, &out, NULL };

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
    if (argv[1] == NULL) {
	fprintf(stderr, "Enter at least one argument\n");
    } else {
	if (chdir(argv[1]) != 0) {
	    perror("Wrong Usage!");
	}
    }
    return 1;
}

/*
 * Function to exit.
 */
int out(char __attribute__((unused)) *a[])
{
    return 0;
}

/*
 * Check each command before call the child process.
 */
int checkIt(char * argv[], char __attribute__((unused)) *ep[])
{
    int i;

    if(argv[0] == NULL) {
	return (1);
    }

    for(i = 0; i < 3; i++) {
	if(strcomp(argv[0], builtins[i]) == 0) {
	    return (*functions[i])(argv);
	}
    }
    for(i = 0; i < 7; i++) {
	if(strcomp(argv[0], commands[i]) == 0) {
	    return runIt(replace[i], argv, ep);
	}
    }
    return runIt(argv[0], argv, ep);
}

/*
 * Calling child process.
 */
int runIt(char * command, char * argv[], char *ep[])
{
    pid_t pid;
    int status;

    pid = fork();
    if(pid < 0) perror("Ops...!");
	
    if(pid == 0) {
	if(execve(command, argv, ep) == -1)
	    perror("Execve error...");
	exit(EXIT_FAILURE);
	return (1);
    }
    else {
	wait(&status);
    }
    return (1);
}


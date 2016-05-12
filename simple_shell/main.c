#include "shell.h"

int main(int __attribute__((unused)) ac, char __attribute__((unused)) *av[], char *ep[])
{
    pid_t pid;
    int status;
    char *command;
    char **argv;

    while(1)
    {
	prompt();
	command = read_line(0);
	argv = string_split(command, ' ');
	pid = fork();

	if(pid == 0)
	    execve(argv[0], argv, ep);
	else
	    wait(&status);
    }
    return (0);
}

#include <unistd.h> /* pid and fork */
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h> /* for the execve */
#include <stdio.h>

int main(int __attribute__((unused)) ac, char *av[]__attribute__((unused)), char **env)
{
    pid_t pid;
    char *exec_argv[] = {"/bin/echo", "Holberton", NULL};
    int status;

    if((pid = fork()) == -1) 
	return (1);

    if(pid == 0)
	execve(exec_argv[0], exec_argv, env);
    
    else {
	wait(&status);
	printf("Child process terminated!");
    }
    return (0);
}

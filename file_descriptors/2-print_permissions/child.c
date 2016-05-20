#include <unistd.h> /* pid and fork */
#include <sys/wait.h> 
#include <stdlib.h> /* for the execve */
#include <stdio.h> 
#include <string.h>

int main(int __attribute__((unused)) ac, char *av[]__attribute__((unused)), char **env)
{
    pid_t pid;
    char *exec_argv[] = {"/bin/echo", "Holberton", NULL};
    int status, i;

    if((pid = fork()) == -1) /* Creating the child process. */ 
	return (1);

    if(pid == 0){
	execve(exec_argv[0], exec_argv, env);
	for(i = 0; (env[i] != NULL); i++)
	    printf("Counting: %d\n", i);
	    /* if(strstr(env[i], "PATH")) {
	       printf("Path of child: %s\n", env[i]);*/

		/* }*/
    }
    else {
	wait(&status);
	printf("Child process terminated!\n");
	for(i = 0; (env[i] != NULL); i++) 
	    if(strstr(env[i], "PATH"))
		printf("Here is the PATH env variable: %s\n", env[i]);
    }
    return (0);
}

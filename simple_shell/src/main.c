#include "shell.h"

/*
 * Simple shell Project.
 */
int main(int __attribute__((unused)) ac, char __attribute__((unused)) *av[], char *ep[])
{
    int bool;
    char *command;
    char **argv;

    if(welcome() == 1) return 1;

    do {
	prompt();
	command = read_line(0);
	if(command == NULL) {
	    print("\n");
	    return (0);
	}

	argv = string_split(command, ' ');
	bool = checkIt(argv, ep);

	free(command);

    } while(bool);
    
    return (0);
}


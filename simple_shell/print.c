#include "shell.h"

int len(char *s)
{
    int i = 0;

    while(s[i])
	i++;

    return i;
}

void print(char *s)
{
    write(1, s, len(s));
}

void prompt(void)
{
    print("simple shell$ ");
}

int welcome()
{
    int fd, in;
    char text[BUF_SIZE];

    system("clear");
    if((fd = open("welcome.c", O_RDONLY)) == -1)
	return (1);

    while((in = read(fd, text, BUF_SIZE)))
	write(1, text, in);

    return (0);
}

#include <fcntl.h>
#include <unistd.h>
#include "header.h"

int logIt(int fd, char bf[])
{
    int in, out;
    
    while((in = read(fd, bf, BUF_SIZE))) {
	out = write(1, bf, in);
	if(out != in) return (1);
    }
    return (0);
}

int main(int ac, char *av[])
{
    int i, fd, ret;
    char bf[BUF_SIZE];
    
    if(ac > 1) {
	for(i = 1; i < ac; i++) {
	    if((fd = open(av[i], O_RDONLY)) == -1) return (1);
	    ret = logIt(fd, bf);
	    if((close(fd) == -1) || (ret == 1 )) return (1);
	}
    }
    else
	return logIt(0, bf);

    return (0);
}

	    

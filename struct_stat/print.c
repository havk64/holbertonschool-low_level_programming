#include "stat.h"

int print(char * argv, struct stat * stat )
{
    int fd;
    char *p;

    if((fd = open(argv, O_RDONLY)) == -1)
	return 1;

    if((p = malloc(sizeof(char) * stat -> st_size + 1)) == NULL)
	return 1;
    
    read(fd, p, stat -> st_size);
    write(1, p, stat -> st_size);
    free(p);
    close(fd);

    return (0);
}

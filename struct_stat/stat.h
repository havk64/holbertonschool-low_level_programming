#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <time.h>
#include <pwd.h>
#include <unistd.h>

int print(char * argv, struct stat * stat );
void report( char * name, struct stat * buffer);

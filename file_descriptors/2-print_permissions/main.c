#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "header.h"

int print_char(char c);

int main(int argc, char *argv[])
{
    struct stat statFile;

    if(argc != 2)
	return (1);

    if(lstat(argv[1], &statFile) == -1) return 1;

    print_char(S_ISDIR(statFile.st_mode)	? 'd' : '-');
    print_char((statFile.st_mode & S_IRUSR)	? 'r' : '-');
    print_char((statFile.st_mode & S_IWUSR)	? 'w' : '-');
    print_char((statFile.st_mode & S_IXUSR)	? 'x' : '-');
    print_char((statFile.st_mode & S_IRGRP)	? 'r' : '-');
    print_char((statFile.st_mode & S_IWGRP)	? 'w' : '-');
    print_char((statFile.st_mode & S_IXGRP)	? 'x' : '-');
    print_char((statFile.st_mode & S_IROTH)	? 'r' : '-');
    print_char((statFile.st_mode & S_IWOTH)	? 'w' : '-');
    print_char((statFile.st_mode & S_IXOTH)	? 'x' : '-');
    print_char('\n');	       
    return (0);
}

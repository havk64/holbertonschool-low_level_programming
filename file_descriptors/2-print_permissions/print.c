#include "header.h"

void  print(struct stat statFile)
{       /* Function to prints each item of permision.           */
    print_char(S_ISDIR(statFile.st_mode)        ? 'd' : '-');
    print_char((statFile.st_mode & S_IRUSR)     ? 'r' : '-');
    print_char((statFile.st_mode & S_IWUSR)     ? 'w' : '-');
    print_char((statFile.st_mode & S_IXUSR)     ? 'x' : '-');
    print_char((statFile.st_mode & S_IRGRP)     ? 'r' : '-');
    print_char((statFile.st_mode & S_IWGRP)     ? 'w' : '-');
    print_char((statFile.st_mode & S_IXGRP)     ? 'x' : '-');
    print_char((statFile.st_mode & S_IROTH)     ? 'r' : '-');
    print_char((statFile.st_mode & S_IWOTH)     ? 'w' : '-');
    print_char((statFile.st_mode & S_IXOTH)     ? 'x' : '-');
    print_char('\n');
}

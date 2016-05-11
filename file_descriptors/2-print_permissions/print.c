#include "header.h"

void  print(struct stat statFile)
{  /* Function to prints each item of permision.	      /  FLAGS	 */
    print_char((statFile.st_mode & 0040000)	? 'd' : '-'); /* S_IFDIR */
    print_char((statFile.st_mode & 00400)	? 'r' : '-'); /* S_IRUSR */
    print_char((statFile.st_mode & 00200)	? 'w' : '-'); /* S_IWUSR */
    print_char((statFile.st_mode & 00100)	? 'x' : '-'); /* S_IXUSR */
    print_char((statFile.st_mode & 00040)	? 'r' : '-'); /* S_IRGRP */
    print_char((statFile.st_mode & 00020)	? 'w' : '-'); /* S_IWGRP */
    print_char((statFile.st_mode & 00010)	? 'x' : '-'); /* S_IXGRP */
    print_char((statFile.st_mode & 00004)	? 'r' : '-'); /* S_IROTH */
    print_char((statFile.st_mode & 00002)	? 'w' : '-'); /* S_IWOTH */
    print_char((statFile.st_mode & 00001)	? 'x' : '-'); /* S_IXOTH */
    print_char('\n');
}

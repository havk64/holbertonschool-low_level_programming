#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <time.h>
#include <pwd.h>
#include <unistd.h>

char * accesses[] = {"...", "..x", ".w.", ".wx", "r..", "r.x", "rw.", "rwx"}
;
void report( char * name, struct stat * buffer)
/* Decode and present the status information. */
{
    int i;
    struct passwd * passent;
    ushort mode = buffer -> st_mode;
    printf("\n %s :\n", name);
    printf(" Last access : %s\n", ctime( &(buffer -> st_atime)) );
    printf(" Last modification : %s\n", ctime( &(buffer -> st_mtime)));
    printf(" Last status change : %s\n", ctime( &(buffer -> st_ctime)));
    printf(" Current file size : %ld \n", buffer -> st_size);

    /* type dev_t is int*/
    printf(" Directory entry is on device %lu.\n", buffer -> st_dev);

    /* type ino_t is unsigned  */
    printf(" Inode number is %lu\n", buffer -> st_ino);

    /* Identify the owner by number and by name. */
    passent = getpwuid(buffer -> st_uid);
    if(passent != NULL)
	printf("The owner of the file is #%d - %s\n",
	       buffer -> st_uid, passent -> pw_name);
    else
	printf(" The owner of the file is #%d - unknown\n", buffer -> st_uid);

    printf(" Access mode 0%o: ", mode);
    for(i = 6; i >= 0; i -=3)
	printf("%s", accesses[(mode >> i) & 7]);
    printf("\n");
}

int main(int argc, char *argv[])
{
/* Print status of files on argument list. */
    {
	struct stat status_buf;
	int fd;
	char *p;
	if (argc < 2)
	{
	    fprintf(stderr, "statfile file1 ...\n");
	    exit(-1);
	}
	while(--argc)
	{
	    if( stat(*++argv, &status_buf) < 0 )
		perror(*argv);
	    else {
		report(*argv, &status_buf);
		fd = open( *argv, O_RDONLY);
		p = malloc(sizeof(char) * status_buf.st_size + 1);
		read( fd, p, status_buf.st_size); 
		write(1, p, status_buf.st_size );
		free(p);
		close(fd);
	    }
	}
    }
    return 0;
}

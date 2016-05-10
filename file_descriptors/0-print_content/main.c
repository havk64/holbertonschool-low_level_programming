#include <fcntl.h>
#include <unistd.h> 

int print_char(int c)
{
    return(write(1, &c, 1));
}

int main(int argc, char *argv[])
{
    int file, stream;
    if(argc != 2) 
	return (1);

    file = open(argv[1],O_RDONLY);

    while(read(file, &stream, 1))
	print_char(stream);

    if(close(file)) return (1);
    
    return (0);
}

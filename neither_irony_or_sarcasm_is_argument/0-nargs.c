#include <stdio.h>
#include <unistd.h>

/* ========================================================= *
 * This function prints the number of arguments given to it. *
 * ========================================================= */
int print_char(char c)
{
    return(write(1,&c,1));
}

int main(int argc, char __attribute__((unused)) *argv[]) {
    print_char( argc - 1 + '0');
    print_char('\n');
    return (0);
}

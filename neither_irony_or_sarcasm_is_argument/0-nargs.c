#include <unistd.h>

/* ========================================================= *
 *    The function print_char prints just one charactere.    *
 * ========================================================= */
int print_char(char c)
{
    return(write(1,&c,1));
}

/* ========================================================= *
 * This function prints the number of arguments given to it. *
 * ========================================================= */
int main(int argc, char __attribute__((unused)) *argv[]) {
    print_char( argc - 1 + '0');
    print_char('\n');
    return (0);
}

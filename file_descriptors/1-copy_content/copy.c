#include "header.h"

/* ==================================================  *
 * This function copies the content of src to dest.	*
 * ==================================================	*/
int copyFile(int src, int dest, char buffer[])
{
    int in, out;
    while((in = read(src, buffer, BUF_SIZE))) {
        out = write(dest, buffer,  in);
        if(in != out) {  /* if something went wrong...  */
            close(src);
            close(dest);
            return 1;
        }
    }
    return (0);
}

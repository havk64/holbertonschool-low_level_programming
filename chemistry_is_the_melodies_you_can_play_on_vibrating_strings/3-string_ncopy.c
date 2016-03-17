/* ======================================================== *
 *             Implementation of strcnpy()                  *
 * =========================================================*/

char *string_ncopy(char *dest, const char *src, int n)
{
    char *cdest;
    cdest = dest;
    while(n && *src) {
	*dest++ = *src++; n--;
    }
    while(n--)
	*dest++ = 0;
    return cdest;
}

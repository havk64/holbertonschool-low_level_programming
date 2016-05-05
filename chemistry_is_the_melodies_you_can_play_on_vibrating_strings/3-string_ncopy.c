/* ======================================================== *
 *             Implementation of strcnpy()                  *
 * =========================================================*/

char *string_ncopy(char *dest, const char *src, int n)
{
    char *s;
    s = dest;
    while(n && (*dest++ = *src++) ) /* while n and second   */
	n--;			    /* expression are != 0  */
    while(n--)
	*dest++ = 0;
    return s;
}

/* A longer version of this function would be:
 *
 * while((n != 0) && (src != 0) {
 *	*dest = *src;
 *	dest++;
 *	src++;
 *	n--;
 * }
 */

/* ======================================================== *
 * This function just copy a string and returns its pointer *
 * =========================================================*/

char *string_copy(char *dest, const char *src)
{
    char *s;
    s = dest;
    while((*dest++ = *src++)) ; /* Empty while body */
    *dest = 0;
    return s;
}

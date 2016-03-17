/* ======================================================== *
 * This function just copy a string and returns its pointer *
 * =========================================================*/

char *string_copy(char *dest, const char *src)
{
    char *cdest;
    cdest = dest;
    while((*dest++ = *src++))
	;
    *dest = 0;
    return cdest;
}

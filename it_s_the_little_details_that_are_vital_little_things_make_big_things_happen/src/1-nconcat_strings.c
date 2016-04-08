/* ========================================================================= *
 * This function is similar to strncat() and used to concatenate two strings.*
 * ========================================================================= */
char *nconcat_strings(char *dest, const char *src, int n)
{
    char *s;
    s = dest;
	
    while( *dest )
	dest++;
    while( *src && n-- )
	*dest++ = *src++;
    *dest = 0;
    return s;
}
 

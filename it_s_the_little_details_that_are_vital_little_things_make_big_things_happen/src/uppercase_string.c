/* ========================================================================= *
 *  This function changes all lowercase letters of a string to uppercase     *
 * ========================================================================= */
char *uppercase_string(char *c)
{
    char *ccopy;
    ccopy = c;
    while(*c++) {
	if(*c >= 'a' && *c <= 'z')
	    *c -= 32;
    }
    return ccopy;
}

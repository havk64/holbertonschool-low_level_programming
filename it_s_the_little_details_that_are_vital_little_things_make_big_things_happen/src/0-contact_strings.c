int print_char(char c);

/* ========================================================================= *
 * Function is similar to strcat() and is used to concatenate two strings.   *
 * ========================================================================= */
char *concat_strings(char *dest, const char *src)
{
    char *s = dest;

    while (*dest) {
	dest++;
    }
    while(*src) {
	*dest = *src;
	src++;
	dest++;
    }
    return s;
}

/* ===============================================

   Or... more compactable, less readable: 

   char *concat_strings(char *dest, const char *src)
   {
       char *s = dest;

       while (*dest)
	   dest++;
       while ((*dest++ = *src++))
	   ;
	   return s;
   }

   ================================================== */

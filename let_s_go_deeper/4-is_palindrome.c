/* =================================================================== *
 *              This function finds the lenght of a string             *
 * =================================================================== */
int find_length(char *s, int i)
{
    if(*(s + i) == 0) return (i);
    return (find_length(s, i+1));
}

/* =================================================================== *
 *       This function checks if the extreme letters are equal         *
 * =================================================================== */
int check(char *s, int len)
{
    if(len < 0) return (1);
    if(*s == *(s + len - 1)) return(check(s + 1 , len - 2));
    return (0);
}

/* =================================================================== *
 *  This function returns 1 if a string is a palindrome and 0 if not.  *
 * =================================================================== */
int is_palindrome(char *s)
{
    int len;
    len = find_length(s, 0);
    return check(s, len);
}

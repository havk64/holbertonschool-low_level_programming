char *cap_string(char *c)
{
    char *s ;
    s = c;
    while(*c++) {
	if((*c >= 'a' && *c <= 'z') && ( c == s || *(c-1) == '\t' || *(c-1) == '\n' || *(c-1) == ' ' )) {
		*c -= 32;
	    }
    }
    return s;
}

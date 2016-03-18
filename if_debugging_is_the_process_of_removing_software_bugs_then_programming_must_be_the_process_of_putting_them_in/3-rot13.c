char *rot13(char *c)
{
    char *s;
    s = c;
    while(*c) {
	if((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M'))
	    *c += 13;
	else if((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z'))
	    *c -= 13;
	c++;
    }
    return s;
}
	

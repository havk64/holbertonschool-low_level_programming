char *leet(char *c)
{
    char *s;
    s = c;
    while(*c) {
	switch(*c) {
	case 'a':
	case 'A':
	    *c = '4';
	    break;
	case 'e':
	case 'E':
	    *c = '3';
	    break;
	case 'o':
	case 'O':
	    *c = '0';
	    break;
	case 't':
	case 'T':
	    *c = '7';
	    break;
	case 'l':
	case 'L':
	    *c = '1';
	    break;
	}
	c++;
    }
    return s;
}

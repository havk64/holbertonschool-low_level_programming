/*=> This function convert a letter to upper case, when possible. */
char uppercase(char c)
{
	if(c >= 'a' && c <= 'z'){
		return c - 32;
	} else {
		return c;
	}
} 

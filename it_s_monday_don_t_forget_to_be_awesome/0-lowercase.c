/*=> This function transform any Uppercase letter in lowercase. => */
char lowercase(char c)
{
	if(c > 64 && c < 91){
		c +=32;
		return c;
	}
	else {
	return c;
	}
}

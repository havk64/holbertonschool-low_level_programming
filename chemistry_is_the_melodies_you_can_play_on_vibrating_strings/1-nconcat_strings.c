/* This function is similar to strncat() and used to concatenate two strings. */
char *nconcat_strings(char *dest, const char *src, int n)
{
	char *cdest;
	cdest = dest;
	
	while( *dest ) {
		dest++;
	}
	while(n) {
		*dest = *src;
		dest++;
		src++;
		n--;
		if(*src == 0) {
			break;
		}
		*dest = '\0';
	}
	return cdest;
}
 

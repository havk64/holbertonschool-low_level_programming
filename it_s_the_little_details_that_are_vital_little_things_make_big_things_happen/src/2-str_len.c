/*This function accepts a string as argument as returns its length */
int str_len(char *s)
{

    int len, i;
for(i = 0; *(s + i) != '\0'; i++) {
  len++;
	}
    return len++;
}

/* Another solution could be:
int str_len(char *s)
{
  int len;
  len = 0;
  while( *s ) {
    len++;
    s++;
  }
  return len;
}
*/

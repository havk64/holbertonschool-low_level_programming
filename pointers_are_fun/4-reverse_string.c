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
/* This Functions uses the previous str_len to reverse a string using pointers */
void reverse_string(char *s) {
  int len, i, save;
  len = str_len( s );
  len--;
  for( i = 0; i < (len / 2) ; i++ ) {
    save = *( s + i );
    *( s + i ) = *( s + (len - i) );
    *( s + (len - i) ) = save;
  }
}

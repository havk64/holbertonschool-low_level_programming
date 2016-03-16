int print_char(char c);

/* This function concatenates two strings. */
char *concat_strings(char *dest, const char *src)
{
  char *rdest = dest;

  while (*dest)
    dest++;
  while ((*dest++ = *src++))
    ;
  return rdest;
}

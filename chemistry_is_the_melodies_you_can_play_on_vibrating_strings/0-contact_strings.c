int print_char(char c);

/* This function concatenates two strings. */
char *concat_strings(char *dest, const char *src)
{
  char *cdest = dest;

  while (*dest) {
    dest++;
  }
  while(*src) {
    *dest = *src;
    src++;
    dest++;
  }
  return cdest;
}

/* ===============================================
Or... more compactable, less readable: 

char *concat_strings(char *dest, const char *src)
{
  char *cdest = dest;

  while (*dest)
    dest++;
  while ((*dest++ = *src++))
    ;
  return cdest;
}

================================================== */

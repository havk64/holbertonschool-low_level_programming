/* ======================================================== *
 * Implementation of strcnpy()                              *
 * =========================================================*/

char *string_ncopy(char *dest, const char *src, int n)
{
  char *cdest;
  cdest = dest;
  while(n && *src) {
    *dest = *src;
    dest++; src++;
    n--;
    /*if(*src == 0)
      break;*/
  }
  while(n) {
    *dest = 0;
    dest++;
    n--;
  }
  /**dest = 0;*/
  return cdest;
}

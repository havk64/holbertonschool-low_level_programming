/* ============================================================= *
 * This function searches for an integer stored in an array.     *
 * advanced_search takes a pointer to the function to be used to *
 * compare values.                                               *
 * ============================================================= */
int advanced_search(int *array, int size, int (*check_func)(int))
{
  int i;
  for(i = 0; i < size; i++) {
    if(check_func(array[i])) return i;
  }
  return(-1);
}

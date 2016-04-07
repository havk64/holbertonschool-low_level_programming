/* ============================================================== *
 * This function executes a function given as a parameter on each *
 * element of an array.                                           *
 * ============================================================== */
void array_iterator(int *array, int size, void (*action_func)(int))
{
  int i = 0;
  while(i < size) {
    (*action_func)(array[i]);
    i++;
  }
}

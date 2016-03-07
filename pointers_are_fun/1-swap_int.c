/* This function accepts two pointers and exchange its values.*/
void swap_int(int *a, int *b)
{
  int temp = *a; /* Assign to the variable temp the "value" that a points to. */
  *a = *b;       /* Dereference the pointer to a to be the value that b points to. */
  *b = temp;     /* Dereference the pointer to b to be the value that temp(previously a) points to. */
}

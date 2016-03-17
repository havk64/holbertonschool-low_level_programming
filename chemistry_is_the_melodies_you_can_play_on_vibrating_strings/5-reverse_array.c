/* ===================================== *
 * Returns the reverse of a given array. *
 * ===================================== */
void reverse_array(int *a, int n)
{
	int i, tmp;
	n--; i = 0;

	while( i < n/2 ) {
		tmp = *( a + i );
		*( a + i ) = *( a + ( n - i ) );
		*( a + ( n - i ) ) = tmp;
		i++;
	}
}

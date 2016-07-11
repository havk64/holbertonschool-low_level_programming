/* 
 * 	Sorting Algorithms Project, Task 1.
 *
 * 	insertion_array sorts an array of numbers in ascending order using
 * 	Insetion Sort algorithm.
 */

void insertion_sort(int *array, int size)
{
	int i, j, tmp;
	for(i = 1; i < size; i++) {
		j = i;
		while(j > 0 && array[j] < array[j-1]) {
			tmp = array[j];
			array[j] = array[j-1];
			array[j-1] = tmp;
			j--;
		}
	}
}

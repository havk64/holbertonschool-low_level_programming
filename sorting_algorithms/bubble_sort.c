/* 
 * 	Sorting Algorithms Project, Task 0.
 *
 * 	Bubble_sort sorts an array of numbers in ascending order using
 * 	Bubble Sort algorithm.
 */

void bubble_sort(int * array, int size)
{
 	int i, j, tmp;
	for(i = (size - 1); i > 0; i--) {
		for(j = 1; j <= i; j++) {
			if(array[j - 1] > array[j]) {
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
			}
		}
	}
}


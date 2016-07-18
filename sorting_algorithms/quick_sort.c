/* 
 * 	Sorting Algorithms Project, Task 2
 *
 * 	Quick_sort sorts an array of numbers in ascending order using
 * 	Quick Sort algorithm.
 */

int partition(int *array, int size)
{
    int i, pivot, tmp;

    i = pivot = (size - 1);
    while(i--) {
	if (array[i] > array[pivot]) {
	    if (array[pivot - 1] != array[pivot]) {
		tmp = array[pivot - 1];
		array[pivot - 1] = array[i];
		array[i] = tmp;
	    }
	    tmp = array[pivot - 1];
	    array[pivot - 1] = array[pivot];
	    array[pivot] = tmp;
	    pivot = i;
	}
    }

    return (pivot);
}

void quick_sort(int *array, int size)
{
    int pivot;

    if (size > 1) {
	pivot = partition(array, size);
	quick_sort(array, pivot);
	quick_sort(&(array[pivot + 1]), (size - pivot - 1));
    }
}


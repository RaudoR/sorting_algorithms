#include "sort.h"

/**
 * quick_sort - Main function for quick_sort.
 * @array:- the given array to be sorted
 * @size:- the size of the array.
 */

void quick_sort(int *array, size_t size)
{
	quickSort_helper(array, 0, size - 1, size);

}

/**
 * quickSort_helper - main function to help with taking in all arguments.
 * @arr:- array used to checked.
 * @low:- is the low number in the array.
 * @high:- high is the furthest number.
 * @size:- size of the array.
 */

void quickSort_helper(int arr[], int low, int high, size_t size)
{

	if (low < high)
	{
		int pi = partition(arr, low, high, size);

		quickSort_helper(arr, low, pi - 1, size);
		quickSort_helper(arr, pi + 1, high, size);

	}
}

/**
 * partition - main function to help partition.
 * @array:- the given array.
 * @lo:- the beginning of the array.
 * @hi:- the end of the array.
 * Return:- returning an index.
 */



int partition(int array[], int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = (lo - 1);
	int j;

	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
		}

	}
	if ((i + 1) != hi)
	{
		swap_int(&array[i + 1], &array[hi]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap_int - main function that swaps the functions.
 * @a:- first given integer.
 * @b:- second given integer.
 */


void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}

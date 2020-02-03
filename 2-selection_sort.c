#include "sort.h"
/**
 * selection_sort - selection sort method
 * @array: array of int
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int hold;
	size_t Min, j, i = 0;

	if (size == 0 || size == 1)
		return;
	while (i < size - 1)
	{
		Min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[Min])
				Min = j;
			j++;
		}
		if (array[i] != array[Min])
		{
			hold = array[i];
			array[i] = array[Min];
			array[Min] = hold;
			print_array(array, size);
		}
		i++;
	}
}

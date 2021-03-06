#include "sort.h"
/**
 * bubble_sort - uses the buble sorting algorithm
 * @array: array to sort
 * @size: size of array
 * Return: sorted array
 */


void bubble_sort(int *array, size_t size)
{
	size_t size_hold = size;
	size_t i;
	size_t temp = 0;

	if (array == NULL || size == 0)
		return;
	while (size_hold > 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
		size_hold--;
	}
}

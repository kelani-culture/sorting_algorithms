#include "sort.h"

/**
 * selection_sort - sort each element in the list by
 *	selecting and comparing an element
 *	@array: array to sort
 *	@size: size of array
 */


void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}

		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}

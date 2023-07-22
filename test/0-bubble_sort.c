#include "sort.h"

/**
	* bubble_sort - sort an array in ascending order
	* @array: array to be sorted
	* @size: size of array
	*/


void bubble_sort(int *array, size_t size)
{
	size_t temp, i, j;
	int bubbled;

	if (size <= 0 || size == 1)
		print_array(array, size);

	else
	{
		for (i = 0; i < size; i++)
		{
			bubbled = 0;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[i])
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
					bubbled = 1;
					print_array(array, size);
				}
			}
			if (bubbled == 0)
				break;
		}
	}
}

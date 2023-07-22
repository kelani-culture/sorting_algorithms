#include "sort.h"
#define TRUE 0
#define FALSE 1

/**
 * bubble_sort - sort a list of array
 * @array: array to be sorted
 * @size: size of array
 */


void bubble_sort(int *array, size_t size)
{
		size_t i, temp;
		int bubbled = FALSE;

		if (array == NULL || size <= 1)
		{
			return;
		}
		while (bubbled == FALSE)
		{
			bubbled = TRUE;
			for (i = 0; i < size - 1; i++)
			{
				if (array[i + 1] < array[i])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					bubbled = FALSE;
					print_array(array, size);
				}
			}
		}
}

#include "sort.h"

/**
 * shell_sort - sort element in an array using the shell sort
 *	algrithm
 * @array: array to be sorted
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, outer, i, inner;
	int vI;

	while (gap <= size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (outer = gap; outer < size; outer++)
		{
			vI = array[outer];
			inner = outer;
			while (inner > gap - 1 && array[inner - gap]
					>= vI)
			{
				array[inner] = array[inner - gap];
				inner -= gap;
			}
			array[inner] = vI;
		}
		gap = (gap - 1) / 3;
		i++;
		print_array(array, size);
	}
}

#include "sort.h"
#include <stdlib.h>

/**
 * counting_sort - sort an element in an array using the counting sort
 *algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void counting_sort(int *array, size_t size)
{
	size_t i, k;
	int *countArray, *dupArray, max, j;

	if (array == NULL || size < 2)
		return;

	max = array[0];
	/* find max element in an array */
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	countArray = (int *) malloc(max * sizeof(int));
	dupArray = (int *) malloc(size * sizeof(int));
	if (countArray == NULL)
	{
		free(countArray);
		return;
	}
	if (dupArray == NULL)
	{
		free(dupArray);
		return;
	}
	k = max + 1;
	for (i = 0;  i < k; i++)
		countArray[i] = 0;

	for (i = 0;  i < size; i++)
		++countArray[array[i]];
	for (i = 0; i <= k; i++)
		countArray[i] = countArray[i] + countArray[i - 1];
	for (j = size - 1; j >= 0; j--)
		dupArray[--countArray[array[i]]] = array[i];
	for (i = 0; i < size; i++)
		array[i] = dupArray[i];
	free(dupArray);
	free(countArray);
}

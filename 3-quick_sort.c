#include "sort.h"

void swap(int *array, int index_1, int index_2, int size);
/**
 * partition - for partitioning the index
 * @array: array to sort
 * @start: start of the array
 * @end: last index of the array
 * @size: size of the array
 * Return: the partition index
 */

int partition(int *array, int start, int end, int size)
{
	int pivot = array[end], i;
	int partitionIndex = start;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			swap(array, i, partitionIndex, size);
			partitionIndex++;
		}
	}
	swap(array, partitionIndex, i, size);
	return (partitionIndex);
}

/**
 * swap - swap the array
 * @array: array to swap
 * @index_1: value to be swaped
 * @index_2: value to be swaped
 * @size: size of the array
 */

void swap(int *array, int index_1, int index_2, int size)
{
	int temp = array[index_1];

	array[index_1] = array[index_2];
	array[index_2] = temp;

	print_array(array, size);
}

/**
 * help_sort - helper function
 * @array: array to sort
 * @start: start index of the array
 * @end: end index of the array
 * @size: size of the array
 */

void help_sort(int *array, int start, int end, int size)
{
	int pIndex;

	if (start >= end)
		return;

	pIndex = partition(array, start, end, size);
	help_sort(array, start, pIndex - 1, size);
	help_sort(array, pIndex + 1, end, size);
}
/**
 * quick_sort - sort a value in an array using quick sort
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	int start, end;

	if (array == NULL || size < 2)
		return;
	start = 0;
	end = size - 1;
	help_sort(array, start, end, size);
}

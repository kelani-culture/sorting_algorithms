#include "sort.h"


void help_bubble(int arr[], size_t size);
/**
 * bubble_sort - sort an array in ascending order
 * @array: array to be sorted
 * @size: size of array
 */


void bubble_sort(int *array, size_t size)
{
    int i = 0;

    while (i < size - 1)
    {
	help_bubble(array, size);
	i++;
    }
}

/**
 * help_bubble - helps check if the array at the last index
 * 	is less than the prev array
 * @arr: array to swap
 * @size: size of the array
 */

void help_bubble(int arr[], size_t size)
{
    size_t i = size - 1;

    while (i > 0)
    {
	if (arr[i] < arr[i -  1])
	{
	    int temp = arr[i];
	    arr[i] = arr[i - 1];
	    arr[i - 1] = temp;
	    print_array(arr, size);
	}
	i--;
    }
}

/**
 * swap - swap the index in the array
 * @arr: array to swap
 * @x: index of the arry
 * @y: index of the array
 */

/* void swap(int arr[], x, y, size) */
/* { */
/*     int temp = arr[x]; */
/*     a[x] = a[y]; */
/*     a[y] = temp; */

/*     print_array(arr, size) */
/* } */

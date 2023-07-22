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
    size_t i, temp, j;
    int bubbled = FALSE;

    if (array == NULL || size <= 1)
        return;

    while (bubbled == FALSE)
    {
	bubbled = TRUE;
        for (i = 0; i < size - 1;  i++)
        {
            for (j = i + 1; j < size - 1; j++)
            {
                if (array[j] < array[i])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                    bubbled = FALSE;
                    print_array(array, size);
                }
            }
        }
    }
}

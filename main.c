#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {1, 2, 3, 4, 5,6, 7, 9, 8};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    puts("-------------------------------------------------");
    int arry[] = {12, 3, 4, 5, 1, 6};
    size_t a = sizeof(arry) / sizeof(arry[0]);

    print_array(arry, a);
    printf("\n");
    bubble_sort(arry, a);
    printf("\n");
    print_array(arry, a);

    puts("-------------------------------------------------");
    int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, 12, 13, 14};
    size_t b = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, b);
    printf("\n");
    bubble_sort(arr, b);
    printf("\n");
    print_array(arr, b);
    return (0);
}

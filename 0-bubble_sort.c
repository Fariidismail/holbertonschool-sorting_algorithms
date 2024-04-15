#include "sort.h"

/**
 *bubble_sort - sorts an array of integers in ascending order
 *using the Bubble sort algorithm
 *@array: array of integers to sort
 *@size: size of array
 */

void bubble_sort(int *array, size_t size)
{
    bool isSwapped;
    int i;
    int temp;
    int iterator;

    if (array == NULL || size == 0)
        return;
    do {
        isSwapped = false;
        i = 0;
        for (iterator = size - 1; i < iterator; i++)
        {
            if (array[i + 1] < array[i])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                isSwapped = true;
                print_array(array, size);
            }
        }
        iterator--;
    } while (isSwapped);
}

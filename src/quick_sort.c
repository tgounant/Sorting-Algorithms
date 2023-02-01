////////////////////////////////////////////////////////////////////////////////////////////////////
//  Thibault Gounant
//  January 2023
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////

size_t partition(int array[], size_t left, size_t right)
{
    int pivot = array[right];

    size_t index = left;

    // loop to through the whole array
    for (size_t i = left; i <= right; ++i)
    {
        // reverse comparison operator for descending order
        if (array[i] < pivot)
        {
            // swap
            int temp = array[i];
            array[i] = array[index];
            array[index] = temp;

            index = index + 1;
        }
    }

    // swap
    int temp = array[right];
    array[right] = array[index];
    array[index] = temp;

    return index;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

void quick_sort(int array[], size_t start, size_t end)
{
    if ((int)start < (int)end)
    {
        size_t pivot_index = partition(array, start, end);

        // move the numbers lower than the pivot to the left side
        quick_sort(array, start, pivot_index-1);
        // move the numbers higher than the pivot to the right side
        quick_sort(array, pivot_index+1, end);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
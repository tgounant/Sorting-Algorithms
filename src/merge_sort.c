////////////////////////////////////////////////////////////////////////////////////////////////////
//  Thibault Gounant
//  January 2023
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////

void merge(int array[], size_t left, size_t mid, size_t right)
{
    int buffer[1+right-left];

    // copy all elements
    for (size_t i = left; i <= right; ++i)
    {
        buffer[i] = array[i];
    }

    size_t left_index = left;
    size_t right_index = mid+1;

    // loop to through the whole array
    for (size_t i = left; i <= right; ++i)
    {
        // reverse comparison operator for descending order
        if ((buffer[left_index] < buffer[right_index] && left_index < mid+1) || (right_index > right))
        {
            array[i] = buffer[left_index];

            left_index = left_index + 1;
        }
        else
        {
            array[i] = buffer[right_index];

            right_index = right_index + 1;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

void merge_sort(int array[], size_t start, size_t end)
{
    if ((int)start < (int)end)
    {
        // same as (start+end)/2 but avoids arithmetic overflow
        size_t mid = start + (end-start) / 2;

        // divide the half left array
        merge_sort(array, start, mid);
        
        // divide the half right array
        merge_sort(array, mid+1, end);

        // merge the sorted halves
        merge(array, start, mid, end);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
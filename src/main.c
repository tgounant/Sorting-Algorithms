////////////////////////////////////////////////////////////////////////////////////////////////////
//  Thibault Gounant
//  January 2023
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>

#include "bubble_sort.h"
#include "insertion_sort.h"
#include "selection_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"

////////////////////////////////////////////////////////////////////////////////////////////////////

void print_array(int array[], size_t start, size_t end)
{
    if (start <= end)
    {
        for (size_t i = start; i <= end; ++i)
        {
            printf("%i ", array[i]);
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[])
{

    printf("\nBubble sort:\n");

    int array1[] = {1, -2, 5, 2, 2, -7, 0};

    size_t size1 = sizeof(array1) / sizeof(array1[0]);

    print_array(array1, 0, size1-1);

    bubble_sort(array1, 0, size1-1);

    print_array(array1, 0, size1-1);


    printf("\nInsertion sort:\n");

    int array2[] = {1, -2, 5, 2, 2, -7, 0};

    size_t size2 = sizeof(array2) / sizeof(array2[0]);

    print_array(array2, 0, size2-1);

    insertion_sort(array2, 0, size2-1);

    print_array(array2, 0, size2-1);


    printf("\nSelection sort:\n");

    int array3[] = {1, -2, 5, 2, 2, -7, 0};

    size_t size3 = sizeof(array3) / sizeof(array3[0]);

    print_array(array3, 0, size3-1);

    selection_sort(array3, 0, size3-1);

    print_array(array3, 0, size3-1);


    printf("\nMerge sort:\n");

    int array4[] = {1, -2, 5, 2, 2, -7, 0};

    size_t size4 = sizeof(array4) / sizeof(array4[0]);

    print_array(array4, 0, size4-1);

    merge_sort(array4, 0, size4-1);

    print_array(array4, 0, size4-1);


    printf("\nQuick sort:\n");

    int array5[] = {1, -2, 5, 2, 2, -7, 0};

    size_t size5 = sizeof(array5) / sizeof(array5[0]);

    print_array(array5, 0, size5-1);

    quick_sort(array5, 0, size5-1);

    print_array(array5, 0, size5-1);
    
    
    printf("\n");

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
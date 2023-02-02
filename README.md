# Sorting-Algorithms

5 standards sorting algorithms according to their overall conception and time complexity.

To make it as easy as possible, the integers are sorted in ascending order in an array of size n.

## Bubble Sort

The idea is to go through the array, i.e. n iterations, comparing the pairs of adjacent elements to rearrange them in the right order.

Therefore, at each of these iterations, the largest element will move up to the end of the array. 

To get all the elements in the right place, we have to repeat n times. 

So the running time will be O(n²) !

## Insertion Sort

The idea is to go through the array, i.e. n iterations, comparing the previous elements to rearrange them in the right order.

Therefore, at each of these iterations, the elements from the start of the array to the current element are sorted.

To get all the elements in the right place, we have to repeat n times. 

So the running time will be O(n²) !

## Selection Sort

The idea is to go through the array, i.e. n iterations, comparing the following elements to rearrange them in the right order.

Therefore, at each of these iterations, the smallest element between the current element and the end of the array will move up to the current element.

To get all the elements in the right place, we have to repeat n times. 

So the running time will be O(n²) !

## Merge Sort

The idea is to divide-and-conquer. 

The array is split into n sub-arrays that are sorted, i.e. log n iterations, each size of sub-arrays are divided by two. 

Then, sub-arrays are merged together by pairs comparing each of their elements, i.e. n iterations, to get a complete sorted array. 

So the running time will be O(n log n) !

## Quick Sort

The idea is to divide-and-conquer.

The array is split into n sub-arrays that are sorted, i.e. log n iterations, each size of sub-arrays are divided by two. 

Each element on the left side is smaller than the pivot and is larger on the right side, i.e. n iterations, to get a complete sorted array. 

So the running time will be O(n log n) !

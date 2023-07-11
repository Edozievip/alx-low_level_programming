#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        printf("Searching in subarray: ");
        for (int i = low; i <= high; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

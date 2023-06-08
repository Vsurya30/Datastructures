#include <stdio.h>
#include<conio.h>
// Merge two subarrays into a single sorted subarray
void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;

    // Compare elements from both subarrays and merge them into arr[] in sorted order
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    // Copy the remaining elements of left[], if any
    while (i < leftSize)
        arr[k++] = left[i++];

    // Copy the remaining elements of right[], if any
    while (j < rightSize)
        arr[k++] = right[j++];
}

// Merge sort function
void mergeSort(int arr[], int size) {
    if (size <= 1)
        return;

    int mid = size / 2;

    int left[mid];
    int right[size - mid];

    // Divide the array into two halves
    for (int i = 0; i < mid; i++)
        left[i] = arr[i];
    for (int i = mid; i < size; i++)
        right[i - mid] = arr[i];

    // Recursively sort the two halves
    mergeSort(left, mid);
    mergeSort(right, size - mid);

    // Merge the sorted halves
    merge(arr, left, mid, right, size - mid);
}



void main() {
    int arr[] = { 22, 1, 19, 55, 0, -7 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: "); // printing unsorted array
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    mergeSort(arr, size);

    printf("Sorted array: ");  // printing sorted array
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    getch();
}

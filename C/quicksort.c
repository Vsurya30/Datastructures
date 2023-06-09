// QUICK SORT 
#include<stdio.h>
#include<conio.h>
// Function to swap two elements in the array
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as the pivot
    int i = low - 1;  // Index of the smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;  // Increment index of the smaller element
            swap(&arr[i], &arr[j]);  // Swap elements
        }
    }

    swap(&arr[i + 1], &arr[high]);  // Place the pivot in its correct position
    return i + 1;  // Return the pivot index
}

// Quicksort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the subarrays on the left and right of the pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

void main() {
    int arr[] = { 62, 15, 92, 2, 31, -5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: "); // printing array before sorting
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    quickSort(arr, 0, size - 1);

    printf("Sorted array: ");  // printing array after sorting
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");


    getch();
}

#include <stdio.h>
#include<conio.h>

void main() {
    int arr[100]; // Assuming a maximum of 100 elements in the array
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Selection Sort Algorithm
    for (i = 0; i < n-1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the remaining unsorted portion of the array
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        // Swap the minimum element with the element at the current position
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    getch();
}


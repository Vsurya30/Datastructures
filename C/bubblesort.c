
//Bubble Sort Algorithm is the simplest sorting algorithm that works by repeatedly swapping the 
//adjacent elements if they are in the wrong order. This algorithm is not suitable for large data
//sets as its average  and worst-case time complexity is quite high.

#include <stdio.h>
#include<conio.h>
void main() {
    int arr[100]; // Assuming a maximum of 100 elements in the array
    int n, i, j, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the adjacent elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    getch();
}

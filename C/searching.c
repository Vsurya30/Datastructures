#include <stdio.h>
#include<conio.h>
// Linear search function
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i; // Return the index where the key is found
    }
    return -1; // Return -1 if the key is not found
}

// Binary search function
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at the middle index
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;
        // If target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // If target is not found in the array
    return -1;
}

void main() {
    int arr[] = { 12, 45, 7, 19, 25, 63 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key,choi,result;
    
    

    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    
    printf("1.LinearSearch\n2.BinarySearch");
    printf("\nEnter your choice:");
    scanf("%d",&choi);
    
    switch(choi)
    {
        case 1:
        {
             result = linearSearch(arr, size, key);
        }
        break;
        case 2:
        {
             result =  binarySearch(arr, 0, size - 1, key);
        }
        break;
    }
    

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);

    getch();
}

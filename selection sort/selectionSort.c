#include <stdio.h>

// sawping the numbers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_index;

    // sorts by scanning each element of the array
    for (i = 0; i < n-1; i++) {
        // a temporary index assignment is made to find the index of the minimum element
        min_index = i;
        
        // checks the remaining elements of the array and updates the index of the minimum element
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index])
                min_index = j;
        }

        // with the place with the minimum element i. replaces the element
        swap(&arr[min_index], &arr[i]);
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12,13,75,6,42,98,78,87,17,5,4,20,11,52,56,57}; // sample array
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("unsorted array:\n");
    printArray(arr, n);

    selectionSort(arr, n);
    printf("sorted array:\n");
    printArray(arr, n);

    return 0;
}

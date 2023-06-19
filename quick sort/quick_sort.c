#include <stdio.h>

// swaping
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // we call the partition function to find the correct position of the pivot element
        int pivotIndex = partition(arr, low, high);

        // sort the elements smaller than the pivot element
        quickSort(arr, low, pivotIndex - 1);

        // sort the elements that are larger than the pivot element
        quickSort(arr, pivotIndex + 1, high);
    }
}

// partition function used to find the correct position of an element in the array
int partition(int arr[], int low, int high) {
    // we specify the pivot element (usually we select the last element)
    int pivot = arr[high];

    // correct position of the pivot element
    int i = (low - 1);

    // scanning the array, we place the smaller ones on the left side and the larger ones on the right side
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // we place the pivot element in its correct position
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}

// main function used to call the quicksort algorithm
int main() {
    int arr[] = {12,13,75,6,42,98,78,87,17,5,4,20,11,52,56,57}; // sample array
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    printf("sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

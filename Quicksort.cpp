#include <iostream>


void swap(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];  // Pivot is chosen as the last element
    int i = low + 1;  // Index of smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            swap(arr, i, j);  // Swap arr[i] and arr[j]
            i++;    // Increment index of smaller element
        }
    }
    swap(arr, low, i - 1);  // Swap pivot with the last smaller element
    return i - 1;  // Return the partitioning index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partitioning index
        int pi = partition(arr, low, high);

        // Separately sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


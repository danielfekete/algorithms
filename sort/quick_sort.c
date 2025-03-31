#include "quick_sort.h"

void qs(int arr[],int lo, int hi){
    int pivotIndex;
    // Base case
    if(lo >= hi){
        return;
    }
    // Partitioning
    pivotIndex = partition(arr, lo, hi);

    // Quick sort subarrays
    qs(arr, lo, pivotIndex - 1);
    qs(arr, pivotIndex + 1, hi);
}

int partition(int arr[], int lo, int hi){
    int temp;
    int pivot = arr[hi];
    int index = lo - 1;
    for(int i = lo; i < hi; i++){
        if(arr[i]<=pivot){
            // Swap
            temp = arr[i];
            arr[i] = arr[++index];
            arr[index] = temp;
        }
    }
    // Set new hi
    arr[hi] = arr[++index];
    arr[index] = pivot;
    return index;
}

void quick_sort(int arr[],int n){
    qs(arr, 0, n-1);
}

#include "quick_sort.c"
#include <stdio.h>

int main(void){
    int arr[] = {5, 4, 3, 2, 1};

    quick_sort(arr, 5);

    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

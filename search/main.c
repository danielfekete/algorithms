#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool linear_search(int haystack[], int needle, int n);
bool binary_search(int haystack[], int needle, int n);

int main(void){
    int haystack[] = {4, 5, 2, 3, 6};
    int needle = 3;
    bool found = false;

    // found = linear_search(haystack, needle, 5);

    found = binary_search(haystack, needle, 5);

    if(found){
        printf("Number %d is found in the array.\n", needle);
    }else{
        printf("Number %d is not in the array.\n", needle);
    }

    return 0;
}

bool linear_search(int haystack[], int needle, int n){
    for(int i = 0; i < n; i++){
        if(haystack[i] == needle){
            return true;
        }
    }
    return false;
}

bool binary_search(int haystack[], int needle, int n){
    int lo = 0;
    int hi = n;

    do{
        int m = floor(lo + (hi - lo) / 2);
        int v = haystack[m];
        if(v == needle){
            return true;
        }else if(needle > v){
            lo = m + 1;
        }else{
            hi = m;
        }
    }while(lo < hi);

    return false;
}

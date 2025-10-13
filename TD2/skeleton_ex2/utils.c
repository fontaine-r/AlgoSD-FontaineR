#include "utils.h"

void swap_int(int *a, int *b){
    int c = &a;
    a = &b;
    b = c;
}

bool is_sorted_nondecreasing(int *arr, int n){
    for (int i = 0; i<n-1; i++){
        if (arr[i]>arr[i+1]) return false;
    }
    return true;
}

void copy_array(int *src, int *dst, int n){
    // copy array elements src into dst
}
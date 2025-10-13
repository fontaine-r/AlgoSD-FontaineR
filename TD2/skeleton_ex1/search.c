#include <math.h>
#include <stdio.h>
#include "search.h"
#include "utils.h"

int linear_search(int *arr, int n, int target)
{
    for (int i = 0 ; i<n ; i++){
        if ( arr[i] == target) return i;
    }
    return -1;
}

int jump_search(int *arr, int n, int target)
{
    // jump search on sorted array, return index
    // of target, return -1 if not found
    return -1;
}

int binary_search(int *arr, int n, int target)
{
    // binary search on sorted array, return index
    // of target, return -1 if not found
    return -1;
}
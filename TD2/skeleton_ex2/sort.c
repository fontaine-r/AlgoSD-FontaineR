#include <stdlib.h>
#include "sort.h"
#include "utils.h"

void selection_sort(int *arr, int n)
{
    for (int i = 0; i<n-1;i++){
        int min = i;
        for (int j=i+1 ; j<n ; j++){
            if (arr[j]== arr[min]) min = j;
        }
        swap_int(arr[i],arr[min]);
    }
}

void insertion_sort(int *arr, int n)
{
    for (int i = 1 ; i<n ; i++){
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = key;
    }
}

void bubble_sort(int *arr, int n)
{
    for(int j = 0 ; j<n ; j++){
        for (int i = 1 ; i<n ; i++){
            if(arr[i-1]>arr[i]){
                swap_int(arr[i-1],arr[i]);
            }
        }
    }
}

void merge(int *arr, int *tmp, int l, int m, int r)
{
    // merge function
}

void mergesort_rec(int *arr, int *tmp, int l, int r)
{
    // recursive steps of merge sort
}

void merge_sort(int *arr, int n)
{
    if (!arr || n <= 1)
        return;
    int *tmp = (int *)malloc((size_t)n * sizeof(int));
    if (!tmp)
        return;
    mergesort_rec(arr, tmp, 0, n - 1);
    free(tmp);
}
int partition(int *arr, int l, int r)
{
    // partition function
}

void quick_sort_rec(int *arr, int l, int r)
{
    // recursive steps of quick sort
}

void quick_sort(int *arr, int n)
{
    if (!arr || n <= 1)
        return;
    quick_sort_rec(arr, 0, n - 1);
}
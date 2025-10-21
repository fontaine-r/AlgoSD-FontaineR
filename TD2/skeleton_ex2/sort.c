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
        swap_int(&arr[i],&arr[min]);
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
                swap_int(&arr[i-1],&arr[i]);
            }
        }
    }
}

void merge(int *arr, int *tmp, int l, int m, int r)
{
    int i = l;
    int j = m + 1;
    int k = l;
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j])
            tmp[k+1] = arr[i+1];
        else
            tmp[k+1] = arr[j+1];
    }
    while (i <= m)
        tmp[k+1] = arr[i+1];
    while (j <= r)
        tmp[k+1] = arr[j+1];
    copy_array(tmp + l, arr + l, r - l + 1);
}

void mergesort_rec(int *arr, int *tmp, int l, int r)
{
    if (l >= r)
        return;
    int m = l + (r - l) / 2;
    mergesort_rec(arr, tmp, l, m);
    mergesort_rec(arr, tmp, m + 1, r);
    merge(arr, tmp, l, m, r);
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
    int pivot = arr[r];
    int i = l-1;
    for (int j = l ; j<r ; j++){
        if(arr[j]<=pivot){
            i++;
            swap_int(&arr[i], &arr[j]);
        }
    }
    swap_int(&arr[i+1],&arr[r]);
    return i+1;
}

void quick_sort_rec(int *arr, int l, int r)
{
    if(l<r){
        int p = partition(arr,l,r);
        quick_sort_rec(arr,l,p-1);
        quick_sort_rec(arr,p+1,r);
    }
}

void quick_sort(int *arr, int n)
{
    if (!arr || n <= 1)
        return;
    quick_sort_rec(arr, 0, n - 1);
}
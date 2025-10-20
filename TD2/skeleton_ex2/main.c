#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#include "utils.h"

int main(void)
{
    int n = 3;
    int* array = malloc(n*sizeof(int));
    int* iarray = malloc(n*sizeof(int));
    copy_array(array,iarray,n);
    double sinsert = clock();
    double einsert = clock();

    // implement main here
    // create array example using malloc
    // use sorting algorithms and compare runtime
    return 0;
}

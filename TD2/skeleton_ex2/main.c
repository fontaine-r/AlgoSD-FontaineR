#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#include "utils.h"

int main(void)
{
    srand(time(NULL));
    int n = 100;
    int* array = random_array(n);

    int* sarray = malloc(n*sizeof(int));
    copy_array(array,sarray,n);
    clock_t sselect = clock();
    selection_sort(sarray,n);
    clock_t eselect = clock();
    double tselect = (double)(eselect-sselect)/CLOCKS_PER_SEC;
    
    int* iarray = malloc(n*sizeof(int));
    copy_array(array,iarray,n);
    clock_t sinsert = clock();
    insertion_sort(iarray,n);
    clock_t einsert = clock();
    double tinsert = (double)(einsert-sinsert)/CLOCKS_PER_SEC;

    int* barray = malloc(n*sizeof(int));
    copy_array(array,barray,n);
    clock_t sbubble = clock();
    bubble_sort(barray,n);
    clock_t ebubble = clock();
    double tbubble = (double)(ebubble-sbubble)/CLOCKS_PER_SEC;

    int* marray = malloc(n*sizeof(int));
    copy_array(array,marray,n);
    clock_t smerge = clock();
    merge_sort(marray,n);
    clock_t emerge = clock();
    double tmerge = (double)(emerge-smerge)/CLOCKS_PER_SEC;

    int* qarray = malloc(n*sizeof(int));
    copy_array(array,qarray,n);
    clock_t squick = clock();
    quick_sort(qarray,n);
    clock_t equick = clock();
    double tquick = (double)(equick-squick)/CLOCKS_PER_SEC;

    printf("Taille du tableau : %i \n Tableau de base :",n);
    for (int i = 0 ; i<n ; i++) printf("%i ",array[i]);

     printf("\n Solution sélection :");
    for (int i = 0 ; i<n ; i++) printf("%i ",sarray[i]);
    printf("\n Temps sélection : %f s",tselect);

    printf("\n Solution insertion :");
    for (int i = 0 ; i<n ; i++) printf("%i ",iarray[i]);
    printf("\n Temps insertion : %f s",tinsert);

    printf("\n Solution bubble :");
    for (int i = 0 ; i<n ; i++) printf("%i ",barray[i]);
    printf("\n Temps bubble : %f s",tbubble);

    printf("\n Solution merge :");
    for (int i = 0 ; i<n ; i++) printf("%i ",marray[i]);
    printf("\n Temps merge : %f s",tmerge);

    printf("\n Solution quick :");
    for (int i = 0 ; i<n ; i++) printf("%i ",qarray[i]);
    printf("\n Temps quick : %f s",tquick);

    free(array);
    free(sarray);
    free(iarray);
    free(barray);
    free(marray);
    free(qarray);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "search.h"
#include "utils.h"
//test


int main(void){
    int sizeofarray = 10000000;
    int* array = malloc(sizeofarray*sizeof(int));
    int m = 3;
    int target = 3*999999;
    for (int i=0; i<sizeofarray; i++){*(array+i) = i*m;}
    int lstart = clock();
    int lresult = linear_search(array,sizeofarray,target);
    int lend = clock();
    double ltime = (lend-lstart)/CLOCKS_PER_SEC;
    printf("L'algo lin a trouvé %i à la position %i en %f secondes\n", target, lresult, ltime);
    if(is_sorted_nondecreasing(array,sizeofarray)){
        int jstart = clock();
        int jresult = jump_search(array,sizeofarray,target);
        int jend = clock();
        double jtime = (jend-jstart)/CLOCKS_PER_SEC;
        printf("L'algo jump a trouvé %i à la position %i en %f secondes\n", target, jresult, jtime);
        int bstart = clock();
        int bresult = binary_search(array,sizeofarray,target);
        int bend = clock();
        double btime = (bend-bstart)/CLOCKS_PER_SEC;
        printf("L'algo binaire a trouvé %i à la position %i en %f secondes\n", target, bresult, btime);
    }
    else printf("Les algos jump et binaire n'ont pas pu se lancer, la liste n'est pas triée \n");
    return 0;
}

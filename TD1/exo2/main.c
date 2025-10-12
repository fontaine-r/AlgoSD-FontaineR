#include <math.h>
#include <stdio.h>
#include <time.h>
#include "functions.h"


void main(){
    long long int n = 1000000 ;
    int nstart = clock();
    int a = NprimesUnderN(n);
    int nend = clock();
    int estart = clock();
    int b = EprimesUnderN(n);
    int eend = clock();
    printf("Ils y a %i nombres premiers plus petits que %lli (naïf)\n", a, n);
    printf("Temps naïf : %li s \n" , (nend-nstart)/CLOCKS_PER_SEC);
    printf("Ils y a %i nombres premiers plus petits que %lli (efficace)\n", b, n);
    printf("Temps naïf : %li s \n" , (eend-estart)/CLOCKS_PER_SEC);
}

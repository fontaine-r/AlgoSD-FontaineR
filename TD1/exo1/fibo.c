#include <stdio.h>
#include <time.h>
#include "fibo.h"

long long int naivefibo(int n){
    if (n == 0){return 0 ;}
    else if (n == 1){return 1 ;}
    return naivefibo(n-1)+naivefibo(n-2);
}

long long int DPfibo(int n, long long int list[]){
    if (n <= 1) {return n ;}
    if (list[n] != -1) {return list[n] ;}
    list[n] = DPfibo(n-1 , list) + DPfibo(n-2 , list) ;
    return list[n] ;
}

#include <math.h>
#include <stdio.h>

int NprimesUnderN(long long int n){
    int counter = 0;
    if (n <= 1){return counter ;}
    for (long long int i = 2 ; i <= n ; i++){
        int IsIPrime = 1;
        for(long long int j = 2 ; j*j<=i ; j++){
            if (i%j == 0) {
                IsIPrime = 0 ;
                break;
            }
        }
        if (IsIPrime){counter++ ;}
    }
    return counter ;
}

int EprimesUnderN(long long int n){
    int counter = 0;
    long long int l[n-1];
    for (long long int i = 0; i < n-1; i++){
        l[i] = 1;
    }
    for (long long int i = 2; i < n+1; i++){
        if (l[i-2]){
            counter++;
            long long int k=i;
            while(i*k<=n){
                l[(i*k)-2] = 0;
                k++;
            }
        }
    }
    return counter;
}
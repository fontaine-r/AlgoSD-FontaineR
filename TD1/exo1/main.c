void main(){
    int x = 45;
    printf("Numéro testé : %i \n ", x);
    int startnaive = clock();
    long long int a = naivefibo(x);
    printf("Réponse naive : %lli \n",a);
    int endnaive = clock();
    printf("Temps algo naïf : %li secondes\n", (endnaive-startnaive)/CLOCKS_PER_SEC);
    long long int array[x+1];
    for (int i = 0; i<x+1 ; i++){ array[i] = -1;}
    int startDP = clock();
    long long int b = DPfibo(x , array);
    printf("Réponse dynamique : %lli \n",b);
    int endDP = clock();
    printf("Temps algo dynamique : %li secondes\n", (endDP-startDP)/CLOCKS_PER_SEC);
}

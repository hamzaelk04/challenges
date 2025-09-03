#include <stdio.h>

int main() {
    int a, b, somme, triple;

    printf("Donner le nombre 1: ");
    scanf("%d", &a);
    printf("Donner le nombre 2: ");
    scanf("%d", &b);

    somme = a + b;
    triple = somme * 3;

    if(a != b){
        printf("La somme est %d", somme);
    } else {
        printf("Les nombres sont identiques donc le triple de leur somme est %d", triple);
    }

    return 0;
}
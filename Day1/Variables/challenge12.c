#include <stdio.h>

int main() {

    int n, x;

    printf("Donne un nombre contient quatre chiffre: ");
    scanf("%d", &n);

    int d = n / 1000;
    int c = (n / 100) % 10;
    int b = (n / 10) % 10;
    int a = n % 10;

    x = a * 1000 + b * 100 + c * 10 + d;

    printf("L'inverse de %d est : %d", n, x);

    return 0;
}
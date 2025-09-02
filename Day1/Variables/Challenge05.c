#include <stdio.h>

int main() {
    
    int c;
    
    printf("Donnez la température en Celsius: ");
    scanf("%d", &c);

    if (c < 0) {
        printf("L'état de l'eau à cette température est solide\n");
    } else if (c >= 0 && c < 100) {
        printf("L'état de l'eau à cette température est liquide\n");
    } else {
        printf("L'état de l'eau à cette température est gazeux\n");
    }

    return 0;
}
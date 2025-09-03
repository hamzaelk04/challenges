#include <stdio.h>

int main() {
    
    int i, a, b;
   
    printf ("Donnez le nombre d'elements du tableau: ");
    scanf ("%d", &a);

    int tableau[a];
    
    for (i = 0; i < a; i++) {
      b = i + 1;
      printf("\nLa case %d: ", b);
      scanf ("%d", &tableau[i]);
    }

    for (i = 0; i < a; i++) {
      printf("%d\n", tableau[i]);
    }

    return 0;
}
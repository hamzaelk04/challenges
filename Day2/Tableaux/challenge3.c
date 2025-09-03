#include <stdio.h>

int main() {
    
    int i, a, b, c = 0;
   
    printf ("Donnez le nombre d'éléments du tableau: \n");
    scanf ("%d", &a);

    int tableau[a];
    
    for (i = 0; i < a; i++) {
      b = i + 1;
      printf("%d:\n", b);
      scanf ("%d", &tableau[i]);
    }

    for (i = 0; i < a; i++) {
      c = c + tableau[i];
    }

    printf ("La somme totale de toutes les elements est: %d", c);

    return 0;
}
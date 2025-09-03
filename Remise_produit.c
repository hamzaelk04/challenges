#include <stdio.h>

int main() {
    
    int nombre_produit, a, i, x = 0;

    printf("Entrez le nombre de produits : ");
    scanf("%d", &nombre_produit);

    float prix_produit[nombre_produit], somme = 0;

    for (i = 0; i < nombre_produit; i++) {
        a = i + 1;
	printf ("Donnez le prix du produit %d: ", a);
        scanf ("%f", &prix_produit[i]);
    }

    float apres_remise[nombre_produit];

    for (i = 0; i < nombre_produit; i++) {
	apres_remise[i] = prix_produit[i] - prix_produit[i] * (x) / 100;
	x = x +2;
    }

    for (i = 0; i < nombre_produit; i++) {
	somme = somme + apres_remise[i];
    }
  
    printf ("La somme totale est: %f", somme);

    return 0;
}
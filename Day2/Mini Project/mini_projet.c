#include <stdio.h>

int main() {
    
    char title[100][100];
    char act[100][100];
    float prix[100];
    float somme;
    int quantite[100];
    int choix, i, c = 0;

    printf("            Système de Gestion de Stock dans une Librairie\n");
    printf("            _______________________________________________\n");

    printf("    1-Ajouter un livre au stock.\n");
    printf("    2-Afficher tous les livres disponibles.\n");
    printf("    3-Rechercher un livre par son titre.\n");
    printf("    4-Mettre a jour la quantite d'un livre.\n");
    printf("    5-Supprimer un livre du stock.\n");
    printf("    6-Afficher le nombre total de livres en stock.\n");
    printf("    ______________________________________________\n");
    printf("Entre votre choix: ");
    scanf("%d", &choix);


    switch (choix)
    {
    case 1:
        printf ("\nAjouter le titre du livre: ");
        scanf ("%s", title);
        printf ("\nAjouter l'auteur du livre: ");
        scanf ("%s", act);
        printf ("\nAjouter le prix du livre: ");
        scanf ("%f", &prix);
        printf ("\nAjouter l du livre: ");
        scanf ("%d", &quantite);
        c = c + 1;
        break;
    case 2:
        for ( i = 0; i < c; i++){
            printf("%s, %s, %f mad, %d piece\n", title[i], act[i], prix[i], quantite[i]);
        }
        
        break;
    case 3:
        /*Le programme permet de supprimer un livre du stock en fonction de son titre.
Après la suppression, le livre n'apparaît plus dans la liste des livres disponibles.*/
        
        break;
    case 4:

        break;

    case 5:
        for ( i = 0; i < c; i++){
            somme = somme + quantite[i];
        }
        printf("Le nombre totale de livres est: %d", somme);
        break;
    
    default:
        break;
    }

    return 0;
}
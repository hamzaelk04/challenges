#include <stdio.h>

int main() {
    
    char title[100][100];
    char act[100][100];
    float prix[100];
    float somme;
    int quantite[100];
    int choix, i, c = 0, nbr_ajout, compteur;

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

    c = 0;
    compteur = 0;

    switch (choix)
    {
    case 1:
	printf("Donnez le nombre de livres que vous voulez d'ajouter: ");
	scanf("%d", &nbr_ajout);
        for (i = c ; i < c + nbr_ajout ; i++) {
		    printf ("\nAjouter le titre du livre %d: ", i + 1);
        	scanf ("%s", title[i]);
        	printf ("\nAjouter l'auteur du livre %d: ", i + 1);
        	scanf ("%s", act[i]);
        	printf ("\nAjouter le prix du livre %d: ", i + 1);
        	scanf ("%f", &prix[i]);
        	printf ("\nAjouter la quantite du livre %d: ", i + 1);
        	scanf ("%d", &quantite[i]);
        	compteur = compteur + 1;
	}
	c = compteur;
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
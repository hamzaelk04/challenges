#include <stdio.h>

int main() {
    
    int nbr_element, i, d = 1, j, sup;
    
    printf ("Donnez le nombre des elements: ");
    scanf ("%d", &nbr_element);

    int tableau[nbr_element];

    for (i = 0; i < nbr_element; i++) {
	    printf ("Donnez la valeur du case %d: ", d);
	    d = d + 1;
	    scanf ("%d", &tableau[i]);
    }

    for (i = 0; i < nbr_element; i++) {
        for (j = i + 1; j < nbr_element; j++) {
            if (tableau[i] > tableau[j]) {
                sup = tableau[j];
                tableau[j] = tableau[i];
                tableau[i] = sup;
            }
        }
    }

    printf ("Le tableau par ordre croissant est: ");
    for (i = 0; i < nbr_element; i++) {
        printf ("%d ", tableau[i]);
    }

    for (i = 0 ; i < nbr_element; i++){
        for (j = i + 1; j < nbr_element; j++) {
            if (tableau[i] < tableau [j]) {
                sup = tableau[j];
                tableau[j] = tableau[i];
                tableau[i] = sup;
            }
        }
    }

    printf ("\nLe tableau par ordre Decroissant est: ");
        for (i = 0; i < nbr_element; i++) {
            printf ("%d ", tableau[i]);
        }
    

    return 0;
}
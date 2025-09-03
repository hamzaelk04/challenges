#include <stdio.h>

int main() {
    
    int nbr_element, i, d = 1, min, max;
    
    printf ("Donnez le nombre des elements: ");
    scanf ("%d", &nbr_element);

    int tableau[nbr_element];

    for (i = 0; i < nbr_element; i++) {
	    printf ("Donnez la valeur du case %d: ", d);
	    d = d + 1;
	    scanf ("%d", &tableau[i]);
    }

    min = tableau[0];

    for (i = 0; i < nbr_element; i++) {
	if (min >= tableau[i]){
	   min = tableau[i];
	}
    }

    for (i = 0; i < nbr_element; i++) {
	if (max <= tableau[i]){
	   max = tableau[i];
	}
    }
    
    printf ("le minimum est: %d\n", min);
    printf ("le maximum est: %d\n", max);

    return 0;
}
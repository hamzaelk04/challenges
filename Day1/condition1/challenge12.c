#include <stdio.h>

int main() {
    
    int h1, h2, m1, m2, s1, s2;
    
    printf ("Donner l'heure du date 1: ");
    scanf ("%d\n", &h1);
    printf ("Donner l'heure du date 2: ");
    scanf ("%d\n", &h2);
    printf ("Donner la minute du date 1: ");
    scanf ("%d\n", &m1);
    printf ("Donner la minute du date 2: ");
    scanf ("%d\n", &m2);
    printf ("Donner la seconde du date 1: ");
    scanf ("%d\n", &s1);
    printf ("Donner la seconde du date 2: ");
    scanf ("%d\n", &s2);

    if (h1 > h2) {
       printf ("%d:%d:%d avant vient %d:%d:%d\n", h1, m1, s1, h2, m2, s2);
    }  else if (h2 < h1) {
       printf ("%d:%d:%d avant vient %d:%d:%d\n", h2, m2, s2, h1, m1, s1);
    }  else {
       if (m1 > m2) {
	     printf ("%d:%d:%d avant vient %d:%d:%d\n", h1, m1, s1, h2, m2, s2);
       }  else if (m1 < m2) {
	     printf ("%d:%d:%d avant vient %d:%d:%d\n", h2, m2, s2, h1, m1, s1);
       }  else {
	  if (s1 > s2) {
	     printf ("%d:%d:%d avant vient %d:%d:%d\n", h1, m1, s1, h2, m2, s2);
       }  else if (s1 < s2) {
	     printf ("%d:%d:%d avant vient %d:%d:%d\n", h2, m2, s2, h1, m1, s1);
       } else if (s1 == s2) {
             printf ("Les deux dates sont identiques: %d:%d:%d et %d:%d:%d\n", h1, m1, s1, h2, m2, s2);
          }
       }
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {

    int x1, x2, y1, y2, z1, z2;
    float distance;

    printf("Donnez les cordonnes des deux points:\n");
    printf("Point 1 (x1, y1, z1): ");
    scanf("%d %d %d", &x1, &y1, &z1);
    printf("Point 1 (x2, y2, z2): ");
    scanf("%d %d %d", &x2, &y2, &z2);

    distance = sqrt(pow(x2-x1, 2) + pow(y2-y1,2) + pow(z2-z1,2));

    printf("La distance entre les deux points est: %f\n", distance);

    return 0;
}
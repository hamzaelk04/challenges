#include <stdio.h>
#include <string.h>

int main() {

    char a[10][3], b[10][3];

    for (int i = 0; i < 3; i++) {
        printf("Enter string a: ");
        fgets(a[i], sizeof(a[i]), stdin);
        printf("Enter string b: ");
        fgets(b[i], sizeof(b[i]), stdin);
    }

    if (strcmp(a[2], b[2]) == 0) {
	printf("it's the same. %s", a[2]);
    } else {
	

    return 0;
}
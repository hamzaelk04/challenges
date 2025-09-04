#include <stdio.h>
#include <string.h>

int main() {

    char a[3][50], b[3][50];

    for (int i = 0; i < 3; i++) {
        printf("Enter string a[%d]: ", i+1);
        fgets(a[i], sizeof(a[i]), stdin);
        printf("Enter string b[%d]: ", i+1);
        fgets(b[i], sizeof(b[i]), stdin);
    }

    for (int i = 0; i < 3; i++) {
        printf("string a[%d] is : %s\n", i+1, a[i]);
        printf("string b[%d] is : %s\n", i+1, b[i]);
    }



    return 0;
}
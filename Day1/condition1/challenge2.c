#include <stdio.h>

int main() {
    
    char c;

    printf("Donnez un charactere: ");
    scanf("%c", &c);

    switch (c) {
    case 'a':
	printf("%c est une voyelle", c);
	break;
    case 'e':
	printf("%c est une voyelle", c);
	break;
    case 'i':
	printf("%c est une voyelle", c);
	break;
    case 'o':
	printf("%c est une voyelle", c);
	break;
    case 'y':
	printf("%c est une voyelle", c);
	break;
    case 'u':
	printf("%c est une voyelle", c);
	break;
    default:
	printf("%c est une non voyelle", c);
	break;
    }

    return 0;
}
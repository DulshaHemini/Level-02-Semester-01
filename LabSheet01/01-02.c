#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%[^\n]", name); 

    printf("Printing name element by element: ");
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}

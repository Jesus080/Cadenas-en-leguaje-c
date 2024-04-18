#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100];

    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra2);

    int comparacion = strcmp(palabra1, palabra2);
    
    if (comparacion == 0) {
        printf("Ambas palabras son iguales: %s\n", palabra1);
    } else if (comparacion < 0) {
        printf("La palabra menor es: %s\n", palabra1);
        printf("La palabra mayor es: %s\n", palabra2);
    } else {
        printf("La palabra menor es: %s\n", palabra2);
        printf("La palabra mayor es: %s\n", palabra1);
    }

    return 0;
}

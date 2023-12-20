#include <stdio.h>
#include <string.h>

int main() {
    int edad = 25;
    char nombre[20] = "Juan";
    float estatura = 1.75;

    printf("Bienvenido, %s\n", nombre);
    printf("Tienes %d años y mides %.2f metros de estatura.\n", edad, estatura);

    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }

    int i;
    for (i = 0; i < strlen(nombre); i++) {
        printf("%c ", nombre[i]);
    }
    printf("\n");

    char otroNombre[20];
    printf("Ingresa otro nombre: ");
    scanf("%s", otroNombre);

    if (strcmp(nombre, otroNombre) == 0) {
        printf("Los nombres son iguales.\\n");
    } else {
        printf("Los nombres son diferentes.\\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int vector[5];
    int j;
    printf("Ingrese 5 numeros:\n");
    for (j = 0; j < 5; j++) {
        printf("Dato %d: ", j + 1);
        scanf("%d", &vector[j]);
    }
    printf("\nDatos del vector:\n");
    for (j = 0; j < 5; j++) {
        printf("Dato %d = %d\n", j + 1, vector[j]);
    }

    return 0;
}

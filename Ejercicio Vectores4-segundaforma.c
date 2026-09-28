#include <stdio.h>

int main() {
    int vector1[5];
    int vector2[5];
    int j;

    printf("Ingrese los 5 numeros del vector 1:\n");
    for(j = 0; j < 5; j++) {
        printf("Dato %d: ", j + 1);
        scanf("%d", &vector1[j]);
    }

    printf("\nIngrese los 5 numeros del vector 2:\n");
    for(j = 0; j < 5; j++) {
        printf("Dato %d: ", j + 1);
        scanf("%d", &vector2[j]);
    }

    printf("\nComparacion posicion por posicion:\n");

    for(j = 0; j < 5; j++) {

        if(vector1[j] > vector2[j]) {
            printf("Posicion %d: vector 1 es mayor (%d > %d)\n", j, vector1[j], vector2[j]);
        }
        else if(vector1[j] < vector2[j]) {
            printf("Posicion %d: Vector 2 es mayor (%d > %d)\n", j, vector2[j], vector1[j]);
        }
        else {
            printf("Posicion %d: Son iguales (%d)\n",
                   j, vector1[j]);
        }

    }

    return 0;
}

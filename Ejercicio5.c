#include <stdio.h>

void ordenar(int vector[]) {
    int i, j, temporal;

    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(vector[i] < vector[j]) {
                temporal = vector[i];
                vector[i] = vector[j];
                vector[j] = temporal;
            }
        }
    }
}

int sumar(int vector[]) {
    int i;
    int suma = 0;

    for(i = 0; i < 10; i++) {
        suma += vector[i];
    }

    return suma;
}

int main() {

    int vector[10];
    int i;
    int suma;
    float promedio;

    printf("Ingrese 10 numeros:\n");

    for(i = 0; i < 10; i++) {
        printf("Dato %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    ordenar(vector);

    printf("\nVector ordenado de mayor a menor:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", vector[i]);
    }

    suma = sumar(vector);

    promedio = (float)suma / 10;

    printf("\n\nSuma: %d", suma);
    printf("\nPromedio: %.2f", promedio);

    return 0;
}
